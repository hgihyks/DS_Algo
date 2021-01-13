#include <bits/stdc++.h>
#define fa(i, a, b) for (int i = a; i < b; ++i)
#define f(i, n) fa(i, 0, n)
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define pr(x) cout << x << endl;
#define printv(v) f(i, v.size()) cout << v[i] << ' '; cout << '\n';
#define printa(a) f(i, sizeof(a)/sizeof(a[0])) cout << a[i] << ' '; cout << '\n';
#define printm(m) for(auto x:m) cout << x.fi << "--> " << x.se << '\n';
#define printadj(adj) fa(i,1,n+1){cout << i << ":";f(j,adj[i].size()) cout << adj[i][j] << "-->";cout << '\n';}
#define vi vector<int>
typedef long long int ll;
typedef long double ld;
#define vl vector<ll>
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
using namespace std;
const int mod=1e9+7;
const int inf = (1<<30);
  void solve()
{
    int i, j, n;
    ll k;
    cin >> n >> k;
    vl xco(n); f(i,n) cin >> xco[i];
    vl yco(n); f(i,n) cin >> yco[i];
    sort(all(xco));
    vi l(n),r(n);
    l[0] = 1;r[n-1] = 1;
    j=0;
    fa(i,1,n)
    {
        while(xco[i] - xco[j] > k) j++;
        l[i] = i-j+1;
    }
    fa(i,1,n) l[i] = max(l[i-1],l[i]);
    //printv(l);
    j=n-1;
    for(i=n-2;i>=0;i--)
    {
        while(xco[j] - xco[i] > k) j--;
        r[i] = j-i+1;
    }
    for(i=n-2;i>=0;i--) r[i] = max(r[i],r[i+1]);
    //printv(r);
    int ans = 1;
    f(i,n-1) ans = max(ans,l[i]+r[i+1]);
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