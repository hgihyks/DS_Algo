class Solution {
public:
    bool check(int n)
    {
        int a;
        int f1=0,f2=0;
        while(n!=0)
        {
            a = n%10;
            if(a==2 || a==5 || a==6 || a==9) f1=1;
            if(a==3 || a==7 || a==4) f2 = 1;
            n/=10;
        }
        if(f1 && !f2) return true;
        return false;
    }
    int rotatedDigits(int N) {
        int ct=0;
        for(int i=1;i<=N;i++)
        {
            if(check(i)) ct++;
        }
        return ct;
    }
};