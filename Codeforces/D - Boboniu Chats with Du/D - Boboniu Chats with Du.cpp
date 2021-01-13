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
#define vi vector<int>
typedef long long int ll;
#define vl vector<ll>
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
using namespace std;
const int mod=1e9+7;
const int inf = (1<<30);
 bool compare(ll a,ll b)
{
    return (a>b);
} 
void solve()
{
    int i, j, n;
    ll d,m,x;
    cin >> n >> d >> m;
    vl big,small;
    f(i,n) 
    {
        cin >> x;
        if(x > m) big.pb(x);
        else small.pb(x);
    }
    sort(all(big),compare);sort(all(small),compare);
    big.insert(big.begin(),0);small.insert(small.begin(),0);
    fa(i,1,big.size()) big[i] += big[i-1];
    fa(i,1,small.size()) small[i] += small[i-1];
    ll s = small.size();
    ll ans = small[s-1],cost;
     fa(x,1,big.size()+1)
    {
        cost = big[x];
        ll remain = n - ((x-1)*(d+1) + 1);
        if(remain >= 0)
        {
            cost += small[min(max(int(remain),0),int(s-1))];
        }
        else continue;
        ans = max(ans,cost);
    }
    cout << ans;
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