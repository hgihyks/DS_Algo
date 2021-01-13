#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF 99999999
const long int m = 1000000007;
 struct paint
{
    lli color, order;
};
  int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        lli x,y,n;
        cin >>x>>y>>n;
        lli p = (n-y)/x;
        cout << p*x+y << endl;
    }
}