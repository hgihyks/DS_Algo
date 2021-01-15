const int inf = (1<<30);
vector<int> solve(string s) {
    vector<int> ans;
    int n = s.length();
    unordered_map<char,int> mp;
    for(char c='a';c<='z';c++) mp[c] = -inf;
    for(int i=0;i<n;i++)
    {
        mp[s[i]] = max(i,mp[s[i]]);
    }
    for(int i=0;i<n;i++)
    {
        int st = i,end = mp[s[i]];
        while(i<end)
        {
            end = max(end,mp[s[i]]);
            i++;
        }
        ans.push_back(end-st+1);
    }
    return ans;
}