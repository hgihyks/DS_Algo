class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        if(n<3) return *max_element(nums.begin(),nums.end());
        int i;
        vector<int> dp(n);
        dp[0] = nums[0];dp[1] = max(nums[0],nums[1]);
        for(i=2;i<n;i++)
            dp[i] = max(dp[i-2] + nums[i],dp[i-1]);
        return dp[n-1];
    }
};