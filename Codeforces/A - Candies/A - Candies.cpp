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
        ll k = 2,x,p=(1<<k)-1;
        while(p <= n)
        {
            if(n%p==0)
            {
                x = n/p;
                break;
            }
            k++;
            p=(1<<k)-1;
        }
        cout << x << endl;
    }
 }