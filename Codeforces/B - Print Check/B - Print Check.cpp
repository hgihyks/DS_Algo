#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF 99999999
const long int m = 1000000007;
/*
4 6 8
1 2 1
2 2 2
2 5 2
1 1 1
1 4 1
1 3 2
2 1 1
2 6 1
*/
struct paint
{
    lli color, order;
};
  int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    map<int,paint> am;
    int i,j,x,y;
    lli ch,rc,a;
    for(i=0;i<k;i++)
    {
        cin >> ch >> rc >> a;
        if(ch==1)
        {
            am[rc].color = a;
            am[rc].order = i;
        }
        else
        {
            am[rc+n].color = a;
            am[rc+n].order = i;
        }
    }
    /*cout << "map" << endl;
    for(i=1;i<=n+m;i++)
    {
        cout << i<< "---"<<am[i].color <<"->"<<am[i].order<<endl;
    }*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            x = i+1,y = j+1;
            if(am[x].color==0 || am[n+y].color==0)
            {
                cout << am[x].color + am[n+y].color << " ";
            }
            else
            {
                if(am[x].order > am[n+y].order)
                {
                    cout << am[x].color << " ";
                }
                else
                {
                    cout << am[n+y].color << " ";
                }
            }
        }
        cout << endl;
    }
}