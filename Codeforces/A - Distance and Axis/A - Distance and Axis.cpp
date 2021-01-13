#include <bits/stdc++.h>
//#include <unordered_map>
#define lli long long int
using namespace std;
const long int inf = 1e9;
  int solve(int a,int k)
{
    if(k>=a) return (k-a);
    else
    {
        if((k%2==0 && a%2==0) || (k%2==1 && a%2==1)) return 0;
        return 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        cout << solve(n,k) << endl;
    }
}