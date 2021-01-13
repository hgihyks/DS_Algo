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
        lli a,b,c;
        cin >> a >> b >> c;
        lli x,y;
        if(a<c)
        {
            x = 1;
        }
        if(a*b>c)
        {
            y = b;
        }
        if(a>=c)
        {
            x = -1;
        }
        if(a*b<=c)
        {
            y = -1;
        }
        cout << x << " " << y << endl;
    }
}