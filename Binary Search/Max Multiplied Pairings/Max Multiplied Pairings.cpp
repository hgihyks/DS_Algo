int solve(vector<int>& nums, vector<int>& multi) {
    int n = nums.size(),m = multi.size();
    sort(nums.begin(),nums.end());
    sort(multi.begin(),multi.end());
    int i1=0,j1=n-1,i2=0,j2=m-1;
    int sum=0;
    while(i1<=j1 and i2<=j2)
    {
        int x = nums[i1]*multi[i2],y =  nums[j1]*multi[j2];
        if(x>y)
        {
            sum += x;
            i1++,i2++;
        }
        else
        {
            sum +=y;
            j1--;j2--;
        }
    }
    return sum;
}