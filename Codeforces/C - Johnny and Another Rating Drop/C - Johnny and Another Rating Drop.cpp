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
        lli n;
        cin >> n;
        lli x=0,c=0,i;
        for(i=0;i<64;i++)
        {
            x = 1ll<<i;
            if(x>n) break;
            c += n/x;
        }
        cout << c << endl;
    }
}