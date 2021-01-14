class Solution {
public:
    bool dfs(vector<int> adj[],int u,int n,bool vis[],bool curr[])
    {
        if(!vis[u])
        {
            vis[u]=true,curr[u]=true;
            for(int i=0;i<adj[u].size();i++)
            {
                int x = adj[u][i];
                if(!vis[x] && dfs(adj,x,n,vis,curr))
                    return true;
                else if(curr[x])
                    return true;
            }
        }
        curr[u] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<int> adj[n];
        int i;
        for(i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        bool vis[n],curr[n];
        memset(vis,0,sizeof(vis));
        memset(curr,0,sizeof(curr));
        for(i=0;i<n;i++)
        {
            if(dfs(adj,i,n,vis,curr)) return false;
        }
        return true;
    }
};