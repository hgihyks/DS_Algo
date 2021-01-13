#include<bits/stdc++.h>
using namespace std;
#define lli long long int
const long int m = 1000000007;
   int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n],b[n];
        int i;
        int x=0,y=0;
        int flag = 1;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<n;i++)
        {
            cin >> b[i];
            if(b[i]) x++;
            else y++;
        }
        if(!x || !y)
        {
            for(i=1;i<n;i++)
            {
                if(a[i]<a[i-1])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
 }