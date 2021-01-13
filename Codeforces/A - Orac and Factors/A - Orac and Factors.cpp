#include<iostream>
using namespace std;
 int f(int n)
{
    int i;
    for(i=3;i<=n;i+=2)
    {
        if(n%i==0)
        {
            return i;
        }
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
        int ans;
        if(n%2==0)
        {
            ans = n + k*2;
        }
        else
        {
            n = n + f(n);
            ans = n + (k-1)*2;
        }
        cout << ans << endl;
    }
}