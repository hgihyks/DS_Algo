#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        int p1_j = min(n/k,m);
        int p2_j = 0;
        m = m - p1_j;
        k--;
        if(k!=0)
        {
            int rem = (m%k)?1:0;
            p2_j = m/k + rem;
        }
        cout << p1_j - p2_j << endl;
    }
}