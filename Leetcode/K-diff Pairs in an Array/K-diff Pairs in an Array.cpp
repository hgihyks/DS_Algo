class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++) mp[nums[i]] = i;
        set<pair<int,int>> s;
        for(int i=0;i<n;i++)
        {
            int x = nums[i];
            if(mp.find(x+k)!=mp.end() and mp[x+k]!=i) s.insert({x,x+k});
        }
        return s.size();
    }
};