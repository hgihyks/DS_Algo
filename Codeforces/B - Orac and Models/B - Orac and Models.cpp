#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int i,j,k;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int dp[n+1];
        for(i=0;i<=n;i++) dp[i]=1;
        for(i=1;i<=n;i++)
        {
            for(j=i*2;j<=n;j+=i)
            {
                if(arr[j-1]>arr[i-1])
                {
                    dp[j] = max(dp[j],dp[i]+1);
                }
            }
        }
        cout << *max_element(dp,dp+n+1) << endl;
    }
}