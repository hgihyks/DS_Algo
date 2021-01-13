#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF 99999999
const long int m = 1000000007;
 struct paint
{
    lli color, order;
};
 lli six(lli *n)
{
    int c = 0;
    while(*n%6==0)
    {
        *n/=6;
        c++;
    }
    return c;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        lli n;
        cin >> n;
        int flag = 0,c=0;
        while(true)
        {
            while(n%6==0)
            {
                n /= 6;
                c++;
                //cout << n << endl;
            }
            if(n%3==0)
            {
                n *= 2;
                c++;
                //cout << n << endl;
            }
            if(n%6!=0) break;
        }
        if(n == 1) cout << c << endl;
        else cout << "-1" << endl;
    }
}