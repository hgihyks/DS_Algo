#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 int sign(int x)
{
    if(x>0) return 1;
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        int dp[n];
        int i,j;
        ll mx,sum=0;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        mx = arr[0];
        for(i=1;i<n;i++)
        {
            if(sign(arr[i])==sign(arr[i-1]))
            {
                mx = max(mx,arr[i]);
            }
            else
            {
                sum+=mx;
                mx = arr[i];
            }
        }
        sum+=mx;
        cout << sum << endl;
    }
 }