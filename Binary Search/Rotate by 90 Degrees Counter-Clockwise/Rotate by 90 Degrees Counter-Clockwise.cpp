#include "solution.hpp"
using namespace std;

class Solution {
    public:
    vector<vector<int>> solve(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        reverse(matrix.begin(), matrix.end());
        return matrix;
    }
};

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    return (new Solution())->solve(matrix);
}