#include "solution.hpp"
using namespace std;
const int mod = 1e9+7;
class Solution {
    public:
    int solve(int n, int faces, int total) {
        long long int dp[2][total+1];
        for(int i=0;i<=total;i++) dp[0][i] = 1;
        dp[1][0] = 0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=total;j++)
            {
                int a = dp[(i-1)&1][j-1];
                int b = (j-faces>0)? dp[(i-1)&1][j-faces-1]:0;
                dp[i&1][j] = (dp[i&1][j-1] + a-b + mod)%mod;
            }
        }
        return (dp[n&1][total] - dp[n&1][total-1] + mod)%mod;
    }
};