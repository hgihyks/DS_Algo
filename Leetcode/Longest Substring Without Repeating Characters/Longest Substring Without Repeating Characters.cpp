class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = s.length();
        if(l<2) return l;
        int i,j;
        map<char,int> m1;
        map<char,int> m2;
        pair<int,int> p;
        for(i=0;i<l;i++)
        {
            m1[s[i]]++;
        }
        i=0,j=0;int leng = 1;
        m2[s[i]]++;
        while(i<=j)
        {
            j++;
            if(i>=l || j>=l) break;
            m2[s[j]]++;
            while(m2[s[j]] > 1)
            {
                m2[s[i]]--;
                i++;
            }
            if(leng < j-i+1)
            {
                leng = j-i+1;
                p.first = i;
                p.second = j;
            }
            if(leng == m1.size()) break;
        }
        return leng;
    }
};