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
        lli a,b,n;
        lli x,y,sum=0;
        int c = 0;
        cin >> a >> b >> n;
        x = max(a,b);
        y = min(a,b);
        while(sum <= n)
        {
            sum = x+y;
            y = x;
            x = sum;
             c++;
        }
        cout << c << endl;
    }
}