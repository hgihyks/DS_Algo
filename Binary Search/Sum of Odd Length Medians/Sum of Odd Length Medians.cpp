#include "solution.hpp"
using namespace std;
#define ll long long int
class Solution {
    public:
    void insert(int x, priority_queue<int> &maxq,
                priority_queue<int, vector<int>, greater<int>> &minq) {
        maxq.push(x);
        if (maxq.size() - minq.size() > 1 or (minq.empty() or maxq.top() > minq.top())) {
            x = maxq.top();
            maxq.pop();
            minq.push(x);
            if (minq.size() > maxq.size()) {
                x = minq.top();
                minq.pop();
                maxq.push(x);
            }
        }
    }
    int solve(vector<int> &nums) {
        int l, r;
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            l = r = i;
            // cout << l << " "<< r<<endl;
            priority_queue<int> maxq;
            priority_queue<int, vector<int>, greater<int>> minq;
            while (l >= 0 and r < n) {
                insert(nums[l], maxq, minq);
                if (l != r) insert(nums[r], maxq, minq);
                ans += maxq.top();
                l--, r++;
            }
        }
        return ans;
    }
};

int solve(vector<int>& nums) {
    return (new Solution())->solve(nums);
}