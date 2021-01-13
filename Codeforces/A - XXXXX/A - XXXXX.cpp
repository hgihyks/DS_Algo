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
        int n,x;
        cin >> n >> x;
        int arr[n],sum[n+1]={0};
        int i;
        int flag = 0,l;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            sum[i+1] = arr[i] + sum[i];
        }
        for(i=0;i<n;i++)
        {
            if((sum[n]-sum[i])%x != 0)
            {
                flag = 1;
                l = n - i;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if((sum[n-i]-sum[0])%x != 0)
            {
                if((n-i)>l)
                {
                    flag = 1;
                    l = n - i;
                    break;
                }
            }
        }
        if(flag) cout << l << endl;
        else cout << "-1" << endl;
    }
}