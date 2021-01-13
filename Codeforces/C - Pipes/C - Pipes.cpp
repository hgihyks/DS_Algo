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
        int n;
        cin >> n;
        string s1,s2;
        cin >> s1 >> s2;
        int i,j;
        int flag = 0;
        int arr[2][n];
        int vis[2][n];
        memset(vis,0,sizeof(vis));
        for(i=0;i<n;i++)
        {
            arr[0][i] = int(s1[i]) - 48;
        }
        for(i=0;i<n;i++)
        {
            arr[1][i] = int(s2[i]) - 48;
        }
        i=0,j=0;
        while(true)
        {
            if(j>=n) break;
             if(arr[i][j] == 1 || arr[i][j] == 2)
            {
                j++;
            }
            else
            {
                if(arr[(i+1)%2][j]!=1 && arr[(i+1)%2][j]!=2)
                {
                    i = (i+1)%2;
                    j++;
                }
                else
                {
                    break;
                }
             }
            if(vis[i][j]) break;
            else vis[i][j] = 1;
        }
        if(i==1 && j==n)
        {
            flag = 1;
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}