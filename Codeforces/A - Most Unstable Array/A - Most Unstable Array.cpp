#include<iostream>
using namespace std;
 int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int a,b,ans;
        if(n==1)
        {
            ans = 0;
        }
        else if(n==2)
        {
            ans = m;
        }
        else
        {
            ans = 2*m;
        }
        cout << ans << endl;
    }
}