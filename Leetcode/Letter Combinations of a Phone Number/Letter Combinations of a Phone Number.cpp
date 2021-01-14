unordered_map<int,vector<char>> mp;
class Solution {
public:
    void helper(string &s,string &digits,vector<string> &ans,int ind)
    {
        if(ind == digits.length()) ans.push_back(s);
        else
        {
            int x = digits[ind] - '0';
            int n = mp[x].size();
            for(int i=0;i<n;i++)
            {
                s.push_back(mp[x][i]);
                helper(s,digits,ans,ind+1);
                s.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        if(mp.size()==0){
        char c = 'a';int num;
        for(int i=2;i<=9;i++)
        {
            if(i == 7 or i==9) num = 4;
            else num = 3;
            while(num--)
            {
                mp[i].push_back(c);
                c++;
            }
        }
    }
        string s;
        vector<string> ans;
        if(digits.length()>0)helper(s,digits,ans,0);
        return ans;
    }
};