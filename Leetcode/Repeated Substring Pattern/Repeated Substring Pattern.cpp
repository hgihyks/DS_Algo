class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        unordered_map<char,int> m;
        int i,j,l=s.length();
        for(i=0;i<l;i++)
        {
            m[s[i]]++;
        }
        int si = m.size();
        string v = "";
        int ct = 0;
        for(i=si;i<=l/2;i++)
        {
            if(l%i != 0) continue;
            for(j=0;j<i;j++) v += s[j];
            for(j=i;j<l;j+=i)
            {
                string r = s.substr(j,i);
                if(r == v) ct++;
                else break;
            }
            if(ct+1 == l/i) return true;
            v = ""; ct = 0;
        }
        return false;
    }
};