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
 bool check(vi a,int s)
{
    int x = 0;
    for(auto p:a) x += p;
    if(x<=s) return true;
    return false;
}
void solve()
{
    int i, j, n;
    string s; int sum;
    cin >> s >> sum;
    vi a; j=0;
    for(i=s.length()-1;i>=0;i--) a.pb(s[i]-48);
    //printv(a);
    ld ct = 0;
    const double base = 10.0;
    f(j,a.size())
    {
        if(check(a,sum)) break;
        ct += ((10-a[j])%10)*(pow(base,j));
        //pr(((10-a[j])%10));
        //pr(ct);
        if(a[j])
        fa(i,j+1,a.size()+1)
        {
            if(i == a.size()) a.pb(0);
            if(a[i]<9)
            {
                a[i]++;
                break;
            }
            a[i]=0;
        }
        a[j] = 0;
    }
    //printv(a);
    ll x = round(ct);
    pr(x);
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