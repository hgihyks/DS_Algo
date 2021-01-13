#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 99999999
const long int m = 1000000007;
  int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int right[n]={0};
    int left[n]={0};
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]>=arr[i+1])
        {
            right[i] = right[i+1]+1;
        }
        else
        {
            right[i] = 0;
        }
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {
            left[i] = left[i-1]+1;
        }
        else
        {
            left[i] = 0;
        }
    }
    int ans = 0;
    for(i=0;i<n;i++)
    {
        ans = max(ans,left[i]+right[i]);
    }
    cout << ans+1;
}