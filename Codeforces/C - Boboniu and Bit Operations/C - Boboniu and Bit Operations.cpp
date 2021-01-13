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
    int i, j, n,m;
    int k;
    cin >>n>>m;
    int a[n];set<int> s;
    vector<int> b,c(n,inf);
    unordered_map<int,int> mp;
    f(i,n) cin >> a[i];
    f(i,m)
    {
        int x; cin >> x;
        s.insert(x);
    }
    for(auto x:s) b.pb(x);
    m = b.size(); int ct = 0;
    int ans;
    fa(k,0,(1<<9))
    {
        f(i,n)
        {
            f(j,m)
            {
                if(((a[i]&b[j])|k) == k)
                {
                    ct++;
                    break;
                } 
            }
            if(ct != i+1) break;
        }
        if(ct == n)
        {
            ans = k;
            break;
        }
        ct = 0;
    }
    cout << ans << endl;
}
int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
        //OJ;
    int t=1;
    //scanf("%d", &t);
    while(t--){
        solve();
    }
    return 0;
}