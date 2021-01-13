#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF 99999999
const long int m = 1000000007;
 struct paint
{
    lli color, order;
};
 lli six(lli *n)
{
    int c = 0;
    while(*n%6==0)
    {
        *n/=6;
        c++;
    }
    return c;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i;
        int o=0,c=0,ct=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='(') o++;
            else c++;
            if(c > o)
            {
                c--;
                ct++;
            }
        }
        cout << ct << endl;
    }
}