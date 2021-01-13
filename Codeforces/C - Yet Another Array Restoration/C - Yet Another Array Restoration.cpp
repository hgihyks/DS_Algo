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
    int x,y;
    cin >> n >> x >> y;
    int d,cur,a = x;
    for(i=n-1;i>=1;i--)
        if((y-x)%i == 0) break;
    d = (y-x)/i;
    cur = 1 + (y-x)/d;
    int left = n-cur;
    while(a-d > 0 && left>0)
    {
        a-=d;
        left--;
    }
    for(i=0;i<n;i++)
    {
        cout << a << ' ';
        a+=d;
    }
    cout << endl;
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