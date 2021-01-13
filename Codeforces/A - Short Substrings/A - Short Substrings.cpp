#include<bits/stdc++.h>
using namespace std;
#define lli long long int
const long int m = 1000000007;
  int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,p;
        cin >> s;
        int i;
        p = s[0];
        int l = s.length();
        for(i=1;i<l-1;i+=2)
        {
            p = p + s[i];
        }
        p = p + s[l-1];
        for(i=0;i<p.length();i++)
        {
            cout << p[i];
        }
        cout << endl;
    }
}