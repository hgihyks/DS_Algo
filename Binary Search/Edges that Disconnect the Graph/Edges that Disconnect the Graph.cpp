void dfs(vector<vector<int>>& graph,int v,bool vis[],pair<int,int> &p)
{
    vis[v]  = 1;
    for(int x:graph[v])
        if(!vis[x] and !(min(v,x) == p.first and (max(v,x) == p.second))) 
            dfs(graph,x,vis,p);
}
bool check(bool vis[],int n)
{
    for(int i=0;i<n;i++) if(vis[i] == 0) return 0;
    return 1;
}
int solve(vector<vector<int>>& graph) {
    int n = graph.size();
    bool vis[n];
    set<pair<int,int>> ans;
    pair<int,int> p;
    for(int x=0;x<graph.size();x++)
        for(int y:graph[x])
        {
            p.first = min(x,y), p.second = max(x,y);
            memset(vis,0,sizeof(vis));
            dfs(graph,0,vis,p);
            if(!check(vis,n))
                ans.insert(p);
        }
    /*for(auto x:ans)
        cout << x.first << " " << x.second << endl;*/
    return ans.size();
}