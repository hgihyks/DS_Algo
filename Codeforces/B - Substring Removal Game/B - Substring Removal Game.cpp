#include <bits/stdc++.h>
#define ll long long int
#define ld long double
using namespace std;
const ll inf = 1e9+7;
 bool compare(int a,int b)
{
    return (a>b);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int i;int ct = 0;
        int ans = 0;
        int l = s.length();
        vector<int> ones;
        for(i=0;i<l;i++)
        {
            if(s[i]=='1')
            {
                while(i<l && s[i]=='1')
                {
                    ct++;
                    i++;
                }
                ones.push_back(ct);
                ct = 0;
            } 
        }
        sort(ones.begin(),ones.end(),compare);
        for(i=0;i<ones.size();i+=2)
            ans += ones[i];
                cout << ans << endl;
    }
}