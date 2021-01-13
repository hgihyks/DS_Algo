#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 99999999
const long int m = 1000000007;
 bool pot(ll x)
{
    return x && (!(x&(x-1ll)));
}
bool isprime(ll n)
{
    ll i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int flag = 1;
         if(pot(n) && n!=2)
        {
            flag = 2;
            //cout << '2'<< endl;
        }
        else if(n%2==1 || n==2 || n%4==0)
        {
            flag = 1;
            //cout << '1'<< endl;
        }
        else if(isprime(n/2))
        {
            flag = 2;
            //cout << '2'<< endl;
        }
        if(flag == 1) cout << "Ashishgup" << endl;
        else cout << "FastestFinger" << endl;
    }
}