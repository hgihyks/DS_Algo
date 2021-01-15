#include "solution.hpp"
using namespace std;

const int inf = 1 << 30;
class Solution {
    public:
    int solve(vector<int>& nums0, vector<int>& nums1, int dist, int cost) {
        int n = nums0.size();
        int dp[2][n];
        dp[0][n - 1] = 0, dp[1][n - 1] = 0;
        int i, j;
        for (i = n - 2; i >= 0; i--) {
            dp[0][i] = inf, dp[1][i] = inf;
            for (j = i + 1; j <= min(n - 1, i + dist); j++) {
                dp[0][i] = min(dp[0][i], min(dp[0][j] + nums0[j], dp[1][j] + cost + nums1[j]));
                dp[1][i] = min(dp[1][i], min(dp[0][j] + cost + nums0[j], dp[1][j] + nums1[j]));
            }
        }
        return min(dp[0][0] + nums0[0], dp[1][0] + nums1[0]);
    }
};

int solve(vector<int>& nums0, vector<int>& nums1, int dist, int cost) {
    return (new Solution())->solve(nums0, nums1, dist, cost);
}