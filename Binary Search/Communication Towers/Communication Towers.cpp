#include "solution.hpp"
using namespace std;
class Solution {
    public:
    void dfs(vector<vector<int>>& matrix, int i, int j, int& n, int& m) {
        matrix[i][j] = 2;
        for (int k = 1; k < n; k++) {
            int p = (i + k) % n, q = j;
            if (matrix[p][q] == 1) dfs(matrix, p, q, n, m);
        }
        for (int k = 1; k < m; k++) {
            int p = i, q = (j + k) % m;
            if (matrix[p][q] == 1) dfs(matrix, p, q, n, m);
        }
    }
    int solve(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 1) {
                    ans++;
                    dfs(matrix, i, j, n, m);
                }
            }
        }
        return ans;
    }
};

int solve(vector<vector<int>>& matrix) {
    return (new Solution())->solve(matrix);
}