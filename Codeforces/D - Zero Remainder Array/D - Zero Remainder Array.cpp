#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF 99999999
const long int m = 1000000007;
  int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        lli n,k;
        cin >> n >> k;
        int i;
        lli arr[n],rem;
        map<lli,int> m;
        map<lli,int>::iterator itr;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]%k!=0)
            {
                rem = ((arr[i]/k)+1)*k - arr[i];
                m[rem]++;
            }
         }
        /*for(itr=m.begin();itr!=m.end();itr++)
        {
            cout << itr->first << "---" << itr->second << endl;
        }*/
        int fr = 0,ans;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            fr = max(fr,itr->second);
        }
        for(itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->second==fr)
            {
                ans = itr->first;
            }
        }
        if(fr==0) cout << "0" << endl;
        else cout << k*(fr-1)+ans+1 << endl;
    }
}