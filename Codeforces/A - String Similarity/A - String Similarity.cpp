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
        int n;
        cin >> n;
        string s; cin >> s;
        int i;string v = "";
        for(i=0;i<2*n-1;i+=2) v += s[i];
        cout << v << endl;
    }
}