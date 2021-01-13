#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int box = n*m;
        if(box%2==0)
        {
            cout << box/2 << endl;
        }
        else
        {
            cout << box/2 + 1 << endl;
        }
    }
}