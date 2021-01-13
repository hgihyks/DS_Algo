#include <bits/stdc++.h>
#define ll long long int
#define ld long double
using namespace std;
const ll inf = 1e9+7;
  int main()
{
    int t;
 cin >> t;
 while(t--)
 {
  int n;
  cin >> n;
  int arr[n];int ans[3] = {0};
  int i,j,k;
  for(i=0;i<n;i++) cin >> arr[i];
  for(i=0;i<n;i++)
  {
   j = i+1,k=n-1;
   while(j<k)
   {
    if(arr[i]+arr[j] <= arr[k])
    {
     ans[0]=i+1,ans[1]=j+1,ans[2]=k+1;
     i=n;
     break;
    }
    else if(arr[i]+arr[j] > arr[k]) k--;
   }
  }
  if(ans[0]==ans[1]) cout << "-1" << endl;
  else cout << ans[0]<<" "<< ans[1]<<" "<< ans[2]<<"\n" ;
 }
}