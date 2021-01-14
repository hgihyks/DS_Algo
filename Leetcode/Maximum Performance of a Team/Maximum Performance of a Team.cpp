#include <bits/stdc++.h>
const int mod = 1e9+7;
using ll = long long int;
struct perform
{
    ll sp,ef;
};
bool compare(perform &a,perform &b)
{
    return a.ef>b.ef;
}
class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        perform arr[n];
        for(int i=0;i<n;i++) arr[i] = {speed[i],efficiency[i]};
        sort(arr,arr+n,compare);
        priority_queue<int,vector<int>,greater<int>> pq;
        ll sum = 0,ans = 0;
        for(int i=0;i<k;i++)
        {
            sum += arr[i].sp;
            pq.push(arr[i].sp);
            ans = max(ans,sum*arr[i].ef);
        }
        for(int i=k;i<n;i++)
        {
            sum += arr[i].sp; sum -= pq.top();
            pq.pop(); pq.push(arr[i].sp);
            ans = max(ans,sum*arr[i].ef);
        }
        return ans%mod;
    }
};
int speedUp = [] () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();