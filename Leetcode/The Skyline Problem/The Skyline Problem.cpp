#include <bits/stdc++.h>
class Solution {
public:
    struct point
    {
        int x,h;
    };
    struct node
    {
        point p;
        bool t;
    };
    static bool compare(node a,node b)
    {
        return (a.p.x < b.p.x);
    }
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>>events;
        for(int i=0;i<buildings.size();i++)
        {
            int s=buildings[i][0];
            int e=buildings[i][1];
            int h=buildings[i][2];
            events.push_back({s,-h,0});
            events.push_back({e,h,1});
        }
        sort(events.begin(),events.end());
        vector<vector<int>>ans;
                multiset<int>st;
        int maxheight=0;
        for(int i=0;i<events.size();i++)
        {
            int curlocation=events[i][0];
            int curheight=abs(events[i][1]);
            int status=events[i][2];
            if(status==0)
            {
                st.insert(curheight);
                if(maxheight!=*st.rbegin())
                {
                    maxheight=*st.rbegin();
                    ans.push_back({curlocation,maxheight});
                }
            }
            else
            {
                auto x=st.find(curheight);
                st.erase(x);
                                if(st.empty())
                {
                    maxheight=0;
                    ans.push_back({curlocation,maxheight});
                }
                else
                {
                   if(maxheight!=*st.rbegin())
                   {
                    maxheight=*st.rbegin();
                    ans.push_back({curlocation,maxheight});
                   }
                }
            }
        }
                return ans;
    }
};