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
 int gcd(int m,int n)
{
    if(n == 0) return m;
    return gcd(n,m%n);
}
void solve()
{
    int i, j, n;
    cin >> n;
    int a[n];
    bool vis[n];
    memset(vis,0,sizeof(vis));
    f(i,n) cin >> a[i];
    int ma = -1,ind = -1,cnt = 1;
    f(i,n)
    {
        if(a[i] > ma)
        {
            ma = a[i];
            ind = i;
        }
    }
    cout << ma << " ";
    vis[ind] = true;
    int cur = ma; ma = -1;
    while(cnt < n)
    {
        f(i,n)
        {
            if(!vis[i])
            {
                int x = gcd(cur,a[i]);
                if(ma < x)
                {
                    ma = x;
                    ind = i;
                }
            }
        }
        cur = ma; vis[ind] = true;
        cnt++;
        cout << a[ind] << " ";
        ma = -1;
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