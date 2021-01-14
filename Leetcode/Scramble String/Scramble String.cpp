string s1,s2;
map<pair<string,string>,bool> mp;
bool isanagram(string a,string b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a == b) return true;
    return false;
}
class Solution {
public:
    bool scramble(string s1,string s2)
    {
        if(!isanagram(s1,s2)) return false;
        pair<string,string> pt = {s1,s2};
        int n = s1.length();
        if(n <= 2) return mp[pt] = true;
        for(int k=1;k<n;k++)
        {
            if(scramble(s1.substr(0,k),s2.substr(0,k)) and scramble(s1.substr(k,n-k),s2.substr(k,n-k))) return 
                mp[pt] = true;
            if(scramble(s1.substr(0,k),s2.substr(n-k,k)) and scramble(s1.substr(k,n-k),s2.substr(0,n-k))) return 
                mp[pt] = true;
        }
        return mp[pt] = false;
    }
    bool isScramble(string x, string y) {
        mp.clear();
        s1=x,s2=y;
        return scramble(s1,s2);
    }
};