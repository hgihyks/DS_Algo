class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> target = heights;
        sort(target.begin(),target.end());
        int c = 0;
        for(int i=0;i<target.size();i++)
        {
            if(target[i]!=heights[i]) c++;
        }
        return c;
    }
};