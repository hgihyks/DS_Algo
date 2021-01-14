#include<bits/stdc++.h>
class Solution {
public:
    int sign(int a,int b)
    {
        if(a<b) return 1;
        return -1;
    }
    int solve(int x1,int y1,int x2,int y2)
    {
        if(x1 == x2) return abs(y1-y2);
        else if(y1 == y2) return abs(x1-x2);
        else
        {
            int a = min(abs(x1-x2),abs(y1-y2));
            x1 += sign(x1,x2)*a;
            y1 += sign(y1,y2)*a;
            return a + solve(x1,y1,x2,y2);
        }
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int i;int ans = 0;
        for(i=1;i<n;i++)
        {
            ans += solve(points[i-1][0],points[i-1][1],points[i][0],points[i][1]);
        }
        return ans;
    }
};