#include <bits/stdc++.h>
#define fa(i, a, b) for (int i = a; i < b; ++i)
#define f(i, n) fa(i, 0, n)
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define printv(v) f(i, v.size()) cout << v[i] << ' '; cout << '\n';
#define printa(a) f(i, sizeof(a)/sizeof(a[0])) cout << a[i] << ' '; cout << '\n';
#define printm(m) for(auto x:m) cout << x.fi << "--> " << x.se << '\n';
typedef long long int ll;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
using namespace std;
const int mod=1e9+7;
const int inf = (1<<30);
  void solve()
{
 ll i, j, n;
    ll a,b,x,y;
    ll a1,b1,case1,case2;
    cin >> a >> b >> x >> y >> n;
    ll temp;
    if(n >= (a-x))
    {
        a1 = x;
        temp = n - (a-x);
        if(temp > 0)
        {
            b1 = max(b-temp,y);
        }
        else b1 = b;
        case1 = a1*b1;
    }
    else
    {
        a1 = a-n;
        case1 = a1*b;
    }
    //cout << a1 << " " << b1 << endl;
    if(n >= (b-y))
    {
        b1 = y;
        temp = n - (b-y);
        if(temp > 0)
        {
            a1 = max(a-temp,x);
        }
        else a1 = a;
        case2 = a1*b1;
    }
    else
    {
        b1 = b-n;
        case2 = a*b1;
    }
    //cout << a1 << " " << b1 << endl;
    //cout << case1 << " " << case2 << endl;
    cout << min(case1,case2) << endl;
}
int main(){
 //ios_base::sync_with_stdio(false);
 //cin.tie(NULL);
 //OJ;
 int t=1;
 scanf("%d", &t);
 while(t--){
  solve();
 }
 return 0;
}