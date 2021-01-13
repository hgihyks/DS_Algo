#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF 99999999
const long int m = 1000000007;
  int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int i;
        int one=0,zero=0;
        int l = s.length();
        for(i=0;i<l;i++)
        {
            if(s[i]=='1') one++;
            else zero++;
        }
        int ch = min(one,zero);
        if(ch%2==0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
}