// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000
  int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n<=30)
        {
            cout << "NO" << endl;
            continue;
        }
        int x = n - 30;
        cout << "YES" << endl;
        if(x!=6 && x!=10 && x!=14)
        {
            cout << x << " " << "6 10 14" << endl;
        }
        else
        {
            cout << x-1 << " " << "6 10 15" << endl;
        }
    }
}
  