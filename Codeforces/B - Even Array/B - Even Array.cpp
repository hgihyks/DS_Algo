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
        int arr[n];
        int i;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int ev=0,od=0,c=0;
        for(i=0;i<n;i++)
        {
            if(i%2==0 && arr[i]%2!=0) ev++;
            if(i%2!=0 && arr[i]%2==0) od++;
        }
        if(ev==od)
        {
             cout << ev;
        }
        else
        {
            cout << "-1";
        }
        cout << endl;
    }
}