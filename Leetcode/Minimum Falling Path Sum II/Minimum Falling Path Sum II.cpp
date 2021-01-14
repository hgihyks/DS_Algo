class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int n = A.size();
        long int dp[n][n];
        for(int i=0;i<n;i++) dp[0][i] = A[0][i];
        for(int i=1;i<n;i++)
            for(int j=0;j<n;j++)
            {
                long int pick = 1e9;
                for(int k=0;k<n;k++)
                    if(k!=j)
                        pick = min(pick,dp[i-1][k]);
                dp[i][j] = A[i][j] + pick;
            }
        return *min_element(&dp[n-1][0],&dp[n-1][n]);
    }
};