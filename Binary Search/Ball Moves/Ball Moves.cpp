vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> index(n);
    for(int i=0;i<n;i++)
    {
        if(nums[i] == 1)
            index[i] = i;
    }
    for(int i=1;i<n;i++)
    {
        index[i] += index[i-1];
        nums[i] += nums[i-1];
    }
    vector<int> ans(n,0);
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        if(i==0)
        {
            a=0;b=0;
            c = index[n-1]-index[i];
            d = -i*(nums[n-1]-nums[i]);
        }
        else if(i==n-1)
        {
            a = -index[i-1];
            b = i*nums[i-1];
            c=0;d=0;
        }
        else
        {
            a = -index[i-1];
            b = i*nums[i-1];
            c = index[n-1]-index[i];
            d = -i*(nums[n-1]-nums[i]);
        }
        ans[i] = a+b+c+d;
    }
    // for(int i=0;i<n;i++) cout << nums[i] << " ";
    // cout << endl;
    // for(int i=0;i<n;i++) cout << index[i] << " ";
    // cout << endl;
    return ans;
}