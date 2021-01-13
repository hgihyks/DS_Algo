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
    int i, j, n,m;
    cin >> n >> m;
    ll mat[n][m];
    ll ans = 0;
    f(i,n) f(j,m) cin >> mat[i][j];
    bool vis[n][m];
    memset(vis,0,sizeof(vis));
    f(i,n)
        f(j,m)
        {
            if(vis[i][j]) continue;
            int ox = n-i-1, oy = m-j-1;
            int elx[] = {i,i,ox,ox}; int ely[]={j,oy,oy,j};
            vi parts;
            f(k,4)
            {
                int nx = elx[k],ny = ely[k];
                if(!vis[nx][ny])
                {
                    vis[nx][ny] = 1;
                    parts.pb(mat[nx][ny]);
                }
            }
            sort(parts.begin(),parts.end());
            int tar = parts[parts.size()/2];
            for(int k:parts) ans += abs(k-tar);
        }
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