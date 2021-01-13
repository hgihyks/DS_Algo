#include <bits/stdc++.h>
using namespace std;
 bool solve(int arr[],int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if((arr[i]-arr[i-1])>1) return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        {
            int n;
            cin >> n;
            int arr[n];
            int i;
            for(i=0;i<n;i++)
            {
                cin >> arr[i];
            }
            sort(arr,arr+n);
            if(solve(arr,n)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
}