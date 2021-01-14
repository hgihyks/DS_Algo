class Solution {
public:
    multiset<double> minq;
    multiset<double,greater<double>> maxq;
    void insert(int x)
    {
        maxq.insert(x);
        if(maxq.size()-minq.size() > 1)
        {
            int z = *maxq.begin();
            maxq.erase(maxq.begin());
            minq.insert(z);
        }
        else if(!minq.empty() and *maxq.begin()>*minq.begin())
        {
            int z = *maxq.begin();
            maxq.erase(maxq.begin());
            minq.insert(z);
            if(minq.size() > maxq.size())
            {
                int z = *minq.begin();
                minq.erase(minq.begin());
                maxq.insert(z);
            }
        }
    }
    void erase(int x)
    {
        if(minq.find(x) != minq.end()) minq.erase(minq.find(x));
        else maxq.erase(maxq.find(x));
    }
    double getmedian()
    {
        if(minq.size() == maxq.size()) return (*maxq.begin()+*minq.begin())/2;
        else return *maxq.begin();
    }
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        maxq.clear();minq.clear();
        for(int i=0;i<k;i++) insert(nums[i]);
        int i = 0,j = k-1;
        vector<double> ans;
        int n = nums.size();
        while(j<n)
        {
            ans.push_back(getmedian());
            erase(nums[i]); i++;
            j++; if(j<n) insert(nums[j]);
        }
        return ans;
    }
};