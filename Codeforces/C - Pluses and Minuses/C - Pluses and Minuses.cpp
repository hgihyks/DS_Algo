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
        lli l = s.length(),place=0,lift = 0;
        lli arr[l];
        for(i=0;i<l;i++)
        {
            if(s[i]=='+')
            {
                arr[i] = ++place;
            }
            else
            {
                arr[i] = --place;
            }
        }
        lli ans = 0,x;
        for(i=0;i<l;i++)
        {
            if(arr[i]<=0)
            if(lift < abs(arr[i]))
            {
                x = abs(arr[i]) - lift;
                ans += (i+1)*x;
                lift = abs(arr[i]);
            }
        }
        cout << ans+l << endl;
    }
}