class Solution {
public:
#define INF 999999
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        int i,p;
        int left[n],right[n];
        left[0] = right[n-1] = INF;
        p = -1;
        if(seats[0]) p = 0;
        for(i=1;i<n;i++)
        {
            if(seats[i]==1)
            {
                left[i] = -1;
                p = i;
            }
            else
            {
                if(p == -1) left[i] = INF;
                else
                    left[i] = i - p;
            }
        }
        p = -1;
        if(seats[n-1]) p = n-1;
        for(i=n-1;i>=0;i--)
        {
            if(seats[i]==1)
            {
                right[i] = -1;
                p = i;
            }
            else
            {
                if(p == -1) right[i] = INF;
                else
                    right[i] = abs(i - p);
            }
        }
        int ans = -1;
        for(i=0;i<n;i++)
        {
            if(left[i] != -1)
            ans = max(ans,min(left[i],right[i]));
        }
        return ans;
    }
};