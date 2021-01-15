#include "solution.hpp"
using namespace std;

class Solution {
    public:
    vector<int> solve(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n), left(n), right(n);
        left[0] = nums[0];
        right[n - 1] = nums[n - 1];
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] * nums[i];
            right[n - i - 1] = right[n - i] * nums[n - i - 1];
        }
        /*for(int i=0;i<n;i++) cout << left[i] << " ";cout << endl;
        for(int i=0;i<n;i++) cout << right[i] << " ";*/
        for (int i = 0; i < n; i++) {
            int a = (i == 0) ? 1 : left[i - 1];
            int b = (i == n - 1) ? 1 : right[i + 1];
            ans[i] = a * b;
        }
        return ans;
    }
};

vector<int> solve(vector<int>& nums) {
    return (new Solution())->solve(nums);
}