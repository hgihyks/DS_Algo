struct job
{
    int st,fin,pr;
};
bool compare(job a,job b)
{
    return a.fin<b.fin;
}
int lastvalid(job interval[],int i)
{
    int x = interval[i].st;
    int l = 0,r = i-1;
    while(l<=r)
    {
        int m = (l+r)/2;
        if(interval[m].fin <= x)
        {
            if(interval[m+1].fin <= x) l = m+1;
            else return m;
        }
        else r = m-1;
    }
    return -1;
}
class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = profit.size();
        job interval[n];
        for(int i=0;i<n;i++) interval[i] = {startTime[i],endTime[i],profit[i]};
        sort(interval,interval+n,compare);
        int dp[n];
        dp[0] = interval[0].pr;
        for(int i=1;i<n;i++)
        {
            int ind = lastvalid(interval,i);
            int x = interval[i].pr + ((ind==-1)? 0:dp[ind]);
            dp[i] = max(dp[i-1],x);
        }
        return dp[n-1];
    }
};