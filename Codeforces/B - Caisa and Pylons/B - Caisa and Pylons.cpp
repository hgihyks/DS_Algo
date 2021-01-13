#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF 99999999
const long int m = 1000000007;
 struct matches
{
    lli mb, ma;
};
compare(matches x,matches y)
{
    return (x.ma > y.ma);
}
 int main()
{
    int n;
    cin >> n;
    int i,x;
    int m = 0;
    for(i=0;i<n;i++)
    {
        cin >> x;
        m = max(m,x);
    }
    cout << m;
}