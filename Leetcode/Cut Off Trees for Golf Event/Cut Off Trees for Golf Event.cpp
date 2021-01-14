class Solution {
public:
    struct point
    {
        int x,y;
    };
    struct node
    {
        point p;
        int dist;
    };
    bool valid(int i,int j,int n,int k)
    {
        if(i>=0 && i<n && j>=0 && j<k) return true;
        return false;
    }
    int bfs(point src,point dest,vector<vector<int>>& forest)
    {
        int n = forest.size();
        int k = forest[0].size();
        bool vis[n][k];
        memset(vis,false,sizeof(vis));
        int dx[] = {-1,0,1,0};
        int dy[] = {0,-1,0,1};
        //vis[src.x][src.y] = true;
        node a = {src,0};
        queue<node> s;
        s.push(a);
        while(!s.empty())
        {
            a = s.front();
            point g = a.p;
            int d = a.dist;
            vis[g.x][g.y] = true;
            if(dest.x == g.x && dest.y == g.y) break;
            s.pop();
            for(int i=0;i<4;i++)
            {
                int y = g.x + dx[i], z = g.y + dy[i];
                if(valid(y,z,n,k) && !vis[y][z] && forest[y][z])
                {
                    s.push({{y,z},d+1});
                    vis[y][z] = true;
                }
            }
        }
        if(vis[dest.x][dest.y]) return a.dist;
        else return -1;
    }
    int cutOffTree(vector<vector<int>>& forest) {
        map<int,point> m;
        int i,j,n=forest.size();
        int k = forest[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
            {
                if(forest[i][j] > 1)
                    m[forest[i][j]] = {i,j};
            }
        }
        int ans = 0;
        point src = {0,0};
        for(auto x:m)
        {
            int ad = bfs(src,x.second,forest);
            if(ad==-1) return ad;
            else ans += ad;
            src = x.second;
        }
        return ans;
    }
};