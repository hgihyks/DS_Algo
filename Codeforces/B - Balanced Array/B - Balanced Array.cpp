#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll x = n/2,i,p,sum1=0,sum2=0;
        if((n/2)%2==0)
        {
            cout << "YES" << endl;
            for(i=0,p=2;i<x;i++,p+=2)
            {
                cout << p << " ";
                sum1 += p;
            }
            for(i=0,p=1;i<x-1;i++,p+=2)
            {
                cout << p << " ";
                sum2 += p;
            }
            cout << sum1 - sum2 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
 }