#include <bits/stdc++.h>
#define lli long long int
using namespace std;
const lli inf = 1e9+7;
 bool compare(lli a,lli b)
{
    return (a>b);
}
 int dfs(vector<lli> adj[],lli dp[],int cur,int par)
{
    if(dp[cur]) return dp[cur];
    dp[cur] = 1;
    for(int i=0;i<adj[cur].size();i++)
    {
        int x = adj[cur][i];
        if(x != par)
        {
            dp[cur] += dfs(adj,dp,x,cur);
        }
    }
    return dp[cur];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        lli n,m;
        cin >> n;
        vector<lli> adj[n+1];
        int i,j,k;
        for(i=0;i<n-1;i++)
        {
            lli u,v;
            cin >> u >> v;
            u--;v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        //print(adj,n);
        cin >> m;
        lli p[m];
        for(i=0;i<m;i++) cin >> p[i];
        lli nodes[n]={0};
        dfs(adj,nodes,0,-1);
        lli wgt[n-1]={0};
        for(i=0;i<n;i++)
        {
            wgt[i] = (nodes[i+1])*(n-nodes[i+1]);
        }
        sort(wgt,wgt+n-1,compare);
        sort(p,p+m,compare);
        lli mod[n-1];
        if(m <= n-1)
        {
            for(i=0;i<n-1;i++)
                if(i<m)mod[i]=p[i];
                else mod[i]=1;
            //sort(eff,eff+n-1,comp);
        }
        else
        {
            int ptr = m-1;
            for(i=n-2;i>0;i--)
            {
                mod[i]=p[ptr];
                p[ptr]=1;
                ptr--;
            }
            mod[0]=1;
            for(i=0;i<m;i++)mod[0]=(mod[0]*p[i]%inf)%inf;
        }
        lli ans = 0;
        for(i=0;i<n-1;i++)
        {
            ans = (ans + (((wgt[i]%inf)*(mod[i]%inf))%inf))%inf;
        }
        cout <<  ans << endl;
    }
}