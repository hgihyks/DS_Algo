int solve(vector<int>& nums) {
    int n = nums.size();
    if(n==0) return 0;
    int maxarr[n];
    maxarr[n-1] = nums[n-1];
    for(int i=n-2;i>=0;i--)
        maxarr[i] = max(nums[i],maxarr[i+1]);
    int profit = 0;
    for(int i=0;i<n;i++)
        profit += maxarr[i]-nums[i];
    return profit;
}