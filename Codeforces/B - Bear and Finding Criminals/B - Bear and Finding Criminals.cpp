#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF 99999999
const long int m = 1000000007;
  int main()
{
    int n,a;
    cin >> n >> a;
     int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int c = 0;
    int k = min(a-1,n-a),d;
    int x = a - k;
    int y = a + k;
    x--;y--;
    a--;
    for(i=0;i<n;i++)
    {
        if(i>=x && i<=y)
        {
            if(arr[i]==1)
            {
                d = a - i;
                if(arr[a+d]==1)
                {
                    if(d==0) c += 1;
                    else c += 2;
                    arr[a+d] = 0;
                }
                arr[i] = 0;
            }
        }
        else
        {
            if(arr[i]==1)
            {
                c++;
            }
        }
    }
    cout << c << endl;
}