#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n],b[n];
        int i;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<n;i++)
        {
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        int sum = 0;
        for(i=0;i<k;i++)
        {
            sum+= (a[i]>b[i])? a[i]:b[i];
        }
        for(i=k;i<n;i++)
        {
            sum+= a[i];
        }
        cout << sum << endl << endl;
    }
}