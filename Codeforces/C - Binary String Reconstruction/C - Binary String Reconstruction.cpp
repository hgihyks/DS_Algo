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
        string s;int x;
        cin >> s;cin >> x;
        int i,n = s.length();
        string v(n,'1'),p;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(i>=x) v[i-x] = '0';
                if(i+x<n) v[i+x] = '0';
            }
        }
        p = v;
        for(i=0;i<n;i++)
        {
            if((i>=x && v[i-x]=='1') || (i+x<n && v[i+x]=='1'))
                p[i] = '1';
            else    p[i] = '0';
        }
        if(p==s) cout << v << endl;
        else cout << "-1" << endl;
    }
}