int dp[500][500];
int n,m;
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};
bool valid(int i,int j)
{
    if(i>=0 and i<n and j>=0 and j<m) return true;
    return false;
}
class Solution {
public:
    int fill(int i,int j,vector<vector<int>>& matrix)
    {
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j] = 1;
        for(int k=0;k<4;k++)
        {
            int p = i+dx[k],q = j+dy[k];
            if(valid(p,q) and matrix[i][j] < matrix[p][q])
                dp[i][j] = max(dp[i][j],1+fill(p,q,matrix));
        }
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n = matrix.size();
        if(n<1) return 0;
        m = matrix[0].size();
        memset(dp,-1,sizeof(dp));
        int i,j;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(dp[i][j]==-1) fill(i,j,matrix);
                return *max_element(&dp[0][0],&dp[n][m+1]);
    }
};