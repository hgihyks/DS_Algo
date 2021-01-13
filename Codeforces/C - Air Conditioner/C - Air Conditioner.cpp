#include<bits/stdc++.h>
using namespace std;
#define lli long long int
const long int m = 1000000007;
   int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int t[n],l[n],h[n];
        int flag = 1;
        int i,j;
        for(i=0;i<n;i++)
        {
            cin >> t[i] >> l[i] >> h[i];
        }
        int a,b,dur;
        int dp[n+1] = {1};
        int temp[2][n+1];
        temp[0][0] = m;
        temp[1][0] = m;
         for(i=1;i<=n;i++)
        {
            if(i==1)
            {
                dur = t[i-1];
            }
            else
            {
                dur = t[i-1] - t[i-2];
            }
             a = temp[0][i-1] - dur;
            b = temp[1][i-1] + dur;
            if(a > h[i-1] || l[i-1] > b)
            {
                 flag = 0;
                break;
             }
            else
            {
                dp[i] = 1;
            }
            temp[0][i] = max(a,l[i-1]);
            temp[1][i] = min(b,h[i-1]);
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        /*for(i=0;i<=n;i++)
        {
            cout << dp[i] << " ";
        }
        cout << endl << endl;
        for(i=0;i<2;i++)
        {
            for(j=0;j<=n;j++)
            {
                cout << temp[i][j] << "\t";
            }
            cout << endl;
        }*/
    }
}