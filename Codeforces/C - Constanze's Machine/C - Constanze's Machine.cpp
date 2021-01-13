#include<bits/stdc++.h>
using namespace std;
#define lli long long int
const long int m = 1000000007;
   int main()
{
    string s;
    cin >> s;
    int l = s.length();
    int i;
    int flag = 1;
    int dp[l+1] = {1};
    for(i=1;i<=l;i++)
    {
        if(s[i-1] == 'w' || s[i-1] == 'm')
        {
            flag = 0;
            break;
        }
        dp[i] = (dp[i] + dp[i-1])%m;
        if(s[i-1] == 'u')
        {
            if(i>=2)
            {
                if(s[i-2] == 'u')
                {
                    dp[i] = (dp[i] + dp[i-2])%m;
                }
            }
        }
        if(s[i-1] == 'n')
        {
            if(i>=2)
            {
                if(s[i-2] == 'n')
                {
                    dp[i] = (dp[i] + dp[i-2])%m;
                }
            }
        }
    }
    if(flag) cout << dp[l];
    else cout << '0';
}