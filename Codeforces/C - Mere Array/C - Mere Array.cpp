#include <bits/stdc++.h>
//#include <unordered_map>
#define lli long long int
using namespace std;
const long int inf = 1e9;
  int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int i;int k = 0;
        int m = INT_MAX;
        int arr[n],brr[n];
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            brr[i] = arr[i];
            m = min(m,arr[i]);
        }
        sort(brr,brr+n);
        for(i=0;i<n;i++)
        {
            if(arr[i]!=brr[i] && arr[i]%m !=0) k++;
        }
        if(k) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}