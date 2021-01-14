class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_map<int,int> m;
        int i;
        for(i=0;i<candies.size();i++) m[candies[i]]++;
        int a = m.size(),b = candies.size();
        return min(a,b/2);
    }
};