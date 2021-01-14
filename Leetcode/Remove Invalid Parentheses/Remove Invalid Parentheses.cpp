class Solution {
public:
    bool valid(string &brac)
    {
        int ct = 0;
        for(char c:brac)
        {
            if(c == '(') ct++;
            else if(c == ')') ct--;
            if(ct < 0) return 0;
        }
        return (ct == 0);
    }
    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        queue<string> q;
        unordered_map<string,bool> mp;
        q.push(s);
        string v;
        int lim = 0;
        while(!q.empty())
        {
            v = q.front();
            q.pop();
            if(mp.find(v) == mp.end())
            {
                mp[v] = 1;
                if(valid(v))
                {
                    if(v.size() > lim) lim = v.size();
                    if(v.size() < lim) break;
                    ans.push_back(v);
                    continue;
                }
                int l = v.size();
                for(int i=0;i<l;i++)
                {
                    if(v[i]!='(' and v[i]!=')') continue;
                    string v0 = v;
                    v0.erase(v0.begin()+i);
                    q.push(v0);
                }
            }
        }
        return ans;
    }
};