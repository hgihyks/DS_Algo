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
    cin >> n;
    ll a[n];
    f(i,n) cin >> a[i];
    ll x;
    if(n==1)
    {
        cout << "1 1\n" << -1*a[0] << endl;
        f(i,2) cout << "1 1\n0\n";
            }
    else
    {
                cout << "1 " << n << "\n";
        fa(i,0,n-1)
        {
            x = -1*n*a[i];
            cout << x << " ";
        } 
        cout << "0\n";
        cout << "1 " << n-1 << endl;
        fa(i,0,n-1)
        {
            x = (n-1)*a[i];
            cout << x << " ";
        } 
        cout << endl;
        cout << n << " " << n << '\n'<< -1*a[n-1] << endl;
    }
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