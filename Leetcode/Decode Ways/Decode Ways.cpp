class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        int dp[n+1];
        if(s[0]=='0') return 0;
        dp[0] = 1;dp[1] = 1;
        int i;
        int a,b=0;
        for(i=2;i<=n;i++)
        {
            a = dp[i-1];
            if(s[i-1]<='6' && (s[i-2]=='1' || s[i-2]=='2')) b = dp[i-2];
            else if(s[i-2]=='1') b = dp[i-2];
            else b = 0;
            if(s[i-1]=='0')
            {
                if(s[i-2]=='1' || s[i-2]=='2') a = 0;
                else return 0;
            }
            dp[i] = a + b;
        }
        /*for(i=0;i<=n;i++)
        {
            cout << dp[i] << " ";
        }
        cout << endl;*/
        return dp[n];
    }
};