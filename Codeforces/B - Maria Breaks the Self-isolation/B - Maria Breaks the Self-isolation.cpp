#include <iostream>
#include <bits/stdc++.h>
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
        int i;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for(i=n-1;i>=0;i--)
        {
            if(i+1 >=arr[i])
            {
                break;
            }
        }
        cout << i+2 << endl;
    }
}