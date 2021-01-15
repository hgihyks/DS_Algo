#include "solution.hpp"
using namespace std;

class Solution {
    public:
    int solve(vector<int> &nums) {
        int n = 0;
        for (int &x : nums)
            if (x > 0) n++;
        vector<bool> present(n, 0);
        for (int &x : nums)
            if (x > 0) present[x - 1] = 1;
        for (int i = 0; i < n; i++)
            if (present[i] == 0) return i + 1;
        return n + 1;
    }
};

int solve(vector<int>& nums) {
    return (new Solution())->solve(nums);
}