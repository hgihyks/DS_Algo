#include "solution.hpp"
using namespace std;
using ll = long long int;
class Solution {
    public:
    bool check(vector<int>& counts, ll g, int k) {
        ll sum = 0;
        for (ll x : counts) sum += min(g, x);
        if (sum >= k * g) return 1;
        return 0;
    }
    int solve(vector<int>& counts, int k) {
        ll sum = 0;
        for (int x : counts) sum += x;
        ll l = 0, r = sum, mid;
        while (l <= r) {
            mid = (l + r) / 2;
            if (check(counts, mid, k)) {
                if (!check(counts, mid + 1, k))
                    return mid;
                else
                    l = mid + 1;
            } else
                r = mid - 1;
        }
        return mid;
    }
};

int solve(vector<int>& counts, int k) {
    return (new Solution())->solve(counts, k);
}