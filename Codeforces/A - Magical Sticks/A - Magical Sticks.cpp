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
        int n;
        cin >> n;
        if(n%2==0)
            cout << n/2 << endl;
        else
        {
            cout << (n+1)/2 << endl;
        }
    }
}