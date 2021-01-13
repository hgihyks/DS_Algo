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
 struct node
{
    ll w,st,net;
};
class myComparator 
{ 
 public: 
     int operator() ( node p1,  node p2) 
     { 
            ll imp1 = (p1.w*p1.st - (p1.w/2)*p1.st);
            ll imp2 = (p2.w*p2.st - (p2.w/2)*p2.st);
      return (imp1 < imp2);
     } 
};
int dfs(vl adj[],ll str[],int cur,int par)
{
    if(adj[cur].size() == 1 && adj[cur][0] == par)
    {
        return str[cur] = 1;
    } 
    f(i,adj[cur].size())
    {
        int x = adj[cur][i];
        if(x!=par)
        {
            str[cur] += dfs(adj,str,x,cur);
        }
    }
    return str[cur];
}
void dfs(vl adj[],ll weigh[],int cur,int par,map<pair<int,int>,int> &m)
{
    if(adj[cur].size() == 1 && adj[cur][0] == par)
    {
        weigh[cur] = m[{par,cur}];
        return;
    } 
    f(i,adj[cur].size())
    {
        int x = adj[cur][i];
        if(x!=par)
        {
            weigh[cur] = m[{par,cur}];
            dfs(adj,weigh,x,cur,m);
        }
    }
}
void solve()
{
    int i, j, n;
    ll s;
    cin >> n >> s;
    vl adj[n+1];
    ll str[n+1]={0},weigh[n+1]={0};
    map<pair<int,int>,int> m;
    int u,v,w;
    f(i,n-1)
    {
        cin >> u >> v >> w;
        adj[u].pb(v);
        adj[v].pb(u);
        m[{u,v}] = w;
        m[{v,u}] = w;
    }
    //printadj(adj);
    dfs(adj,weigh,1,-1,m);
    dfs(adj,str,1,-1);
    //printa(weigh);
    //printa(str);
    priority_queue<node,vector<node>,myComparator> pq;
    ll sum = 0;
    fa(i,2,n+1)
    {
        ll x = weigh[i]*str[i];
        pq.push({weigh[i],str[i],x});
        sum += x;
    }
    /*while(!pq.empty())
    {
        node x = pq.top();
        pq.pop();
        cout << x.w << " " << x.st << " " << x.net << endl;
    }*/
    ll ct = 0;
    while(sum > s)
    {
        node x = pq.top();
        pq.pop();
        sum -= (x.w-x.w/2)*x.st;
        x.w /= 2;
        x.net = x.w*x.st;
        pq.push(x);
        ct++;
    }
    cout << ct << endl;
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