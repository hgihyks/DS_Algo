#include<bits/stdc++.h>
using namespace std;
#define INF 9223372036854;
#define lli long long int
const long int m = 1000000007;
 int prsb(lli n)
{
    int pos = 0;
    lli m = 1;
    while(!(n & m))
    {
        m = m<<1;
        pos++;
    }
    return pos;
}
 int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        lli a,b;
        cin >> a >> b;
        lli x,y,z;
        int n,c=0;
        x = min(a,b);
        y = max(a,b);
        z = y/x;
        //cout << z << endl;
        if(y%x!=0)
        {
            c = -1;
        }
        else if(z==1)
        {
            c = 0;
        }
        else if(z && (!(z&(z-1))))
        {
            n = prsb(z);
            //cout << n << endl;
            c += n/3;
            n = n%3;
            c += n/2;
            n = n%2;
            c += n/1;
        }
        else
        {
            c = -1;
        }
        cout << c << endl;
    }
}