int solve(string s) {
    int n = s.length();
    if(n==0) return 0;
    string t = "";
    for(int i=0;i<n-1;i++)
        if(s[i+1]!=s[i])
            t += s[i];
    t += s[n-1];
    s = t;
    n = s.length();
    vector<int> dif;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1]) dif.push_back(0);
        else if(s[i]>s[i-1]) dif.push_back(1);
        else dif.push_back(-1);
    }
    int ct = 1;
    for(int i=1;i<n-1;i++)
    {
        if(dif[i]*dif[i-1] == -1)
        {
            ct++;
            i++;
        }
    }
    return ct;
}