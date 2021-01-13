#include<bits/stdc++.h>
using namespace std;
#define INF 9223372036854;
#define lli long long int
const long int m = 1000000007;
 int prsb(lli n)
{
    int pos = 0;
    lli m = 1;
    while(!(n & m))
    {
        m = m<<1;
        pos++;
    }
    return pos;
}
 int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        set<int> s;
        vector<int> v;
        int i,j;
        int flag = 1;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        int x = arr[0],k;
        for(i=1;i<n;i++)
        {
            k = x^arr[i];
            for(j=0;j<n;j++)
            {
                if(!s.count(k^arr[j]))
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                v.push_back(k);
            }
            flag = 1;
        }
        if(v.empty()) cout << "-1" << endl;
        else cout << *min_element(v.begin(),v.end()) << endl;
    }
}