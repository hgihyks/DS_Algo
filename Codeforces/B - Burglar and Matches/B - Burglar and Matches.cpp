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
    lli n,m;
    cin >> n >> m;
    matches arr[m];
    int i;
    lli c = 0;
    for(i=0;i<m;i++)
    {
        cin >> arr[i].mb >> arr[i].ma;
    }
    sort(arr,arr+m,compare);
    for(i=0;i<m && n;i++)
    {
        if(n>=arr[i].mb)
        {
            c += arr[i].mb*arr[i].ma;
            n -= arr[i].mb;
        }
        else
        {
            c += n*arr[i].ma;
            n = 0;
        }
    }
    cout << c;
}