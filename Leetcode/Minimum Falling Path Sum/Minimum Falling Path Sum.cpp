class Solution {
public:
    bool valid(int i,int j,int n)
    {
        if(i>=0 and i<n and j>=0 and j<n) return true;
        return false;
    }
    int minFallingPathSum(vector<vector<int>>& A) {
        int n = A.size();
        int dp[n][n];
        for(int i=0;i<n;i++) dp[0][i] = A[0][i];
        for(int i=1;i<n;i++)
            for(int j=0;j<n;j++)
            {
                int pick = 101;
                for(int k=j-1;k<=j+1;k++)
                    if(valid(i-1,k,n))
                        pick = min(pick,dp[i-1][k]);
                dp[i][j] = A[i][j] + pick;
            }
        return *min_element(&dp[n-1][0],&dp[n-1][n]);
    }
};