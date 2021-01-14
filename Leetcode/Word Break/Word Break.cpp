class Solution {
public:
    bool wordbreak(string &s,int ind,unordered_map<string,bool> &mp,int dp[])
    {
        if(ind == s.length()) return 1;
        if(dp[ind]!=-1) return dp[ind];
        string v = "";
        for(int j=ind;j<s.length();j++)
        {
            v += s[j];
            if(mp.find(v) != mp.end())
            {
                    dp[ind] = max(dp[ind],(1 & wordbreak(s,j+1,mp,dp)));
            }
        }
        if(dp[ind]==-1) return 0;
        else return dp[ind];
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        int dp[n];
        memset(dp,-1,sizeof(dp));
        //dp[0]=1;
        unordered_map<string,bool> mp;
        for(auto x:wordDict) mp[x] = 1;
        return wordbreak(s,0,mp,dp);
        //return dp[n];
    }
};