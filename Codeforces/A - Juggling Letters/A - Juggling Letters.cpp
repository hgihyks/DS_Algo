#include <bits/stdc++.h>
#define lli long long int
using namespace std;
const lli inf = 1e9+7;
 bool solve(unordered_map<char,int> &m,int n)
{
    for(auto x:m)
    {
        if(x.second%n != 0) return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s[n];
        int i,j;
        for(i=0;i<n;i++) cin >> s[i];
        unordered_map<char,int> m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<s[i].length();j++)
                m[s[i][j]]++;
        }
        if(solve(m,n)) cout << "YES" << endl;
        else cout << "NO" << endl;
     }
}