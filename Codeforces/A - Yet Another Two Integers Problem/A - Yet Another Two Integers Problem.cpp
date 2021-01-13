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
 int i, j, n;
    ll a,b;
    cin >> a >> b;
    ll dif = abs(a-b);
    ll ans = dif/10 + ((dif%10)? 1:0);
    cout << ans << endl;
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