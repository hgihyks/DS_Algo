#include "solution.hpp"
using namespace std;

class Solution {
    public:
    string solve(int n) {
        vector<int> v;
        n--;
        string s = "";
        while (n >= 0) {
            v.push_back(n % 26);
            n /= 26;
            n--;
        }
        reverse(v.begin(), v.end());
        for (int x : v) {
            char c = x + 'A';
            s += c;
        }
        return s;
    }
};

string solve(int n) {
    return (new Solution())->solve(n);
}