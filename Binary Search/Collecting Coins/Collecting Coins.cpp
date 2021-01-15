#include "solution.hpp"
using namespace std;

class Solution {
    public:
    int solve(vector<vector<int>>& matrix) {
        int m = matrix[0].size(), n = matrix.size();
        int dp[2][m + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                dp[i % 2][j] = max(dp[(i - 1) % 2][j], dp[i % 2][j - 1]) + matrix[i - 1][j - 1];
            }
        }
        return dp[n % 2][m];
    }
};

int solve(vector<vector<int>>& matrix) {
    return (new Solution())->solve(matrix);
}