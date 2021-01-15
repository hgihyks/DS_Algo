using interval = vector<int>;
int binary(vector<interval>& i,int x)
{
    int n = i.size();
    int l = 0, r = n-1;
    while(l<=r)
    {
        int m = (l+r)/2;
        //cout << m << endl;
        if(i[m][0] <= x)
        {
            if(m==n-1 or i[m+1][0] > x) return m;
            else l = m+1;
        }
        else r = m-1;
    }
    return -1;
}
vector<interval> merge(vector<interval> slot)
{
    int n = slot.size();
    vector<interval> ans;
    for(int i=1;i<n;i++)
    {
        if(slot[i][0] <= slot[i-1][1])
        {
            slot[i][0] = min(slot[i][0],slot[i-1][0]);
            slot[i][1] = max(slot[i][1],slot[i-1][1]);
            slot[i-1][0]=-1,slot[i-1][1]=-1;
        }
    }
    for(interval x:slot)
        if(x[0]!=-1)
            ans.push_back(x);
    return ans;
}
vector<vector<int>> solve(vector<interval>& intervals, interval& target) {
    int n = intervals.size();
    int lb = binary(intervals,target[0]);
    intervals.insert(intervals.begin()+lb+1,target);
    //for(auto x:intervals) cout << x[0]<<" "<<x[1]<<endl;
    return merge(intervals);
}