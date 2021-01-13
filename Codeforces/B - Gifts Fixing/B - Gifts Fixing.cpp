#include <bits/stdc++.h>
#define lli long long int
using namespace std;
  int main()
{
    int t;
    cin >> t;
    while (t--)
        {
            int n;
            cin >> n;
            int arr[n],brr[n];
            int i;
            for(i=0;i<2*n;i++)
            {
                if(i<n) cin >> arr[i];
                else cin >> brr[i-n];
            }
            int a = *min_element(arr,arr+n);
            int b = *min_element(brr,brr+n);
            lli ans = 0;
            for(i=0;i<n;i++)
            {
                ans += max(abs(arr[i]-a),abs(brr[i]-b));
            }
            cout << endl << ans << "\n\n";
        }
}