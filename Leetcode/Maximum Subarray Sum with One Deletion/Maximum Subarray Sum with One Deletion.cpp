class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int i;
        int del_val = 0, add_val = arr[0],overall_max = arr[0];
        for(i=1;i<n;i++)
        {
            del_val = max(del_val + arr[i],add_val);
            add_val = max(arr[i],add_val + arr[i]);
            overall_max = max({overall_max,del_val,add_val});
        }
        return overall_max;
    }
};