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
using namespace std;
const int mod=1e9+7;
const int inf = (1<<30);
  void solve()
{
 int i, j, n;
    string s;
 cin >> n; cin >> s;
    int arr[n]={0},pre[n+1]={0};
    f(i,n) arr[i] = s[i] - 48; 
    f(i,n) pre[i+1] = pre[i] + arr[i];
    unordered_map<int,ll> m;
    f(i,n+1)
    {
        pre[i] -= i;
        m[pre[i]]++;
    }
    //printm(m);
    ll ans = 0;
    for(auto x:m)
        if(x.se > 1) ans += (x.se * (x.se-1))/2;
    cout <<ans << endl;
}
int main(){
 //ios_base::sync_with_stdio(false);
 //cin.tie(NULL);
  int t=1;
 scanf("%d", &t);
 while(t--){
  solve();
 }
 return 0;
}