class Solution {
    int m,n;
bool isvalid(int i,int j)
{
    if(i>=0 and i<m and j>=0 and j<n) return true;
    return false;
}
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int dx[] = {-1,0,1,0}, dy[] = {0,-1,0,1};
        m = grid.size(), n = grid[0].size();
        int i,j;
        int area = 0,ctzero=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]==0) ctzero++;
                else
                for(int k=0;k<4;k++)
                {
                    int p = i + dx[k],q = j + dy[k];
                    if(isvalid(p,q) and grid[i][j]>grid[p][q]) area += grid[i][j]-grid[p][q];
                    if(!isvalid(p,q)) area += grid[i][j];
                }
            }
        }
        area += 2*(m*n - ctzero);
        return area;
    }
};