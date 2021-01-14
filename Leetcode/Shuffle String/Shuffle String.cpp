#include <bits/stdc++.h>
struct node
{
    int a;
    char c;
};
bool compare(node x,node y)
{
    return x.a < y.a;
}
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.length(),i;
        node arr[n];
        for(i=0;i<n;i++)
        {
            arr[i].a = indices[i];
            arr[i].c = s[i];
        }
        sort(arr,arr+i,compare);
        for(i=0;i<n;i++) s[i] = arr[i].c;
        return s;
    }
};