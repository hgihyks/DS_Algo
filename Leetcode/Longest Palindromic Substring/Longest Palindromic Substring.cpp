class Solution {
public:
    string longestPalindrome(string s) {
                int l = s.length();
        if(l<2) return s;
        int dp[l][l];
        memset(dp,0,sizeof(dp));
        //int a = palin(s,0,l-1);
        int si = 0;
        pair<int,int> p;
        int i,j,k=0;
        for(i=0;i<l,k<l;)
        {
            for(j=k;j<l;j++,i++)
            {
                if(i==j)
                {
                    dp[i][j] = 1;
                }
                else if(j==i+1)
                {
                    dp[i][j] = (dp[i][j-1] && (s[i]==s[j]));
                }
                else
                {
                    if(s[i] == s[j])
                    {
                        dp[i][j] = dp[i+1][j-1];
                    }
                }
                if(dp[i][j])
                {
                    if(si < j-i+1)
                    {
                        si = j-i+1;
                        p.first = i;
                        p.second = j;
                    }
                }
            }
            k++;i=0;
        }
        /*for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }*/
        string s1;
        for(i=p.first;i<=p.second;i++)
        {
            s1 += s[i];
        }
        return s1;
    }
};