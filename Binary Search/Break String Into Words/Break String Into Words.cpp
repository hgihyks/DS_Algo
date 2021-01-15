unordered_map<string, bool> mp;
bool wordbreak(string& s, int j, int dp[]) {
    if (j == s.length()) return 1;
    if (dp[j] != -1) return dp[j];
    string v = "";
    for (int i = j; i < s.length(); i++) {
        v += s[i];
        if (mp.find(v) != mp.end()) dp[j] = max(dp[j], (1 & wordbreak(s, i + 1, dp)));
    }
    if (dp[j] == -1) return dp[j] = 0;
    return dp[j];
}
bool solve(vector<string>& words, string s) {
    mp.clear();
    int n = s.length();
    int dp[n];
    memset(dp, -1, sizeof(dp));
    for (string x : words) mp[x] = true;
    return wordbreak(s, 0, dp);
}