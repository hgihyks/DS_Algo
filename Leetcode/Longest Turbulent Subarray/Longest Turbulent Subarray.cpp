class Solution {
public:
    int compare(int x,int y)
    {
        if(x == y) return 0;
        else if(x > y) return 1;
        else return -1;
    }
    int maxTurbulenceSize(vector<int>& A) {
        int n = A.size();
        int ans = 1; int j = 0;
        for(int i=1;i<n;i++)
        {
            int c = compare(A[i-1],A[i]);
            if(c == 0) j = i;
            else if(i == n-1 or c*compare(A[i],A[i+1])!=-1)
            {
                ans = max(ans,i-j+1);
                j = i;
            }
        }
        return ans;
            }
};