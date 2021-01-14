using vi = vector<int>;
bool compare(const vi &a,const vi &b)
{
    if(a[0]==b[0]) return a[1]>b[1];
    return a[0]<b[0];
}
class Solution {
public:
    int removeCoveredIntervals(vector<vi>& intervals) {
        sort(intervals.begin(),intervals.end(),compare);
        int n = intervals.size();
        int i;int ct = n;
        int max_until = intervals[0][1];
        for(i=1;i<n;i++)
        {
            if(intervals[i][1] <= max_until) ct--;
            max_until = max(max_until,intervals[i][1]);
        }
        return ct;
    }
};