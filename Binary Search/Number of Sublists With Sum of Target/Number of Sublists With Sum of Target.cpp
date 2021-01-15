#include "solution.hpp"
using namespace std;

class Solution {
    public:
    int solve(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> presum(n + 1, 0);
        for (int i = 1; i <= n; i++) presum[i] = presum[i - 1] + nums[i - 1];
        unordered_map<int, int> mp;
        int ans = 0;
        // mp[0]=1;
        for (int i = 0; i <= n; i++) {
            int x = presum[i] - target;
            if (mp.find(x) != mp.end()) ans += mp[x];
            mp[presum[i]]++;
        }
        return ans;
    }
};

int solve(vector<int>& nums, int target) {
    return (new Solution())->solve(nums, target);
}