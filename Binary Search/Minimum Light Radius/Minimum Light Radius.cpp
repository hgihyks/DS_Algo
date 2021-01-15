bool check(vector<int> &nums,double &r)
{
    int n = nums.size();
    int ct = 0;
    for(int i=0;i<n;)
    {
        double x = nums[i]+r;
        ct++;
        if(ct>3) return 0;
        while(nums[i]>=(x-r) and nums[i]<=(x+r) and i<n)
        {
            i++;
        }
    }
    return 1;
}
double solve(vector<int>& nums) 
{
    sort(nums.begin(),nums.end());
    double l = 0,r = nums.back()-nums[0],mid;
    //while((r-l)>0.00001)
    int q = 20;
    while(q--)
    {
        mid = (l+r)/2;
        if(check(nums,mid)) r = mid;
        else l = mid;
    }
    return mid;
}