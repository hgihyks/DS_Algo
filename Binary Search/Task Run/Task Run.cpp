int solve(vector<int>& tasks, int k) {
    unordered_map<int,int> mp;
    int cutime = 0;
    int n = tasks.size();
    for(int x:tasks)
    {
        if(mp.find(x)==mp.end())
        {
            cutime++;
            mp[x] = cutime;
        }
        else
        {
            if(cutime-mp[x]>=k)
            {
                cutime++;
                mp[x] = cutime;
            }
            
            {
                cutime = k+mp[x]+;
                mp[x] = cutime;
            }
        }
    }
     cutime;
}