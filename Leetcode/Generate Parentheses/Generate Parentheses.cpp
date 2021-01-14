class Solution {
public:
    void backtrack(int open,int close,vector<string> &ans,string &s,int ct=0)
    {
        if(open == 0 and close == 0) ans.push_back(s);
        else if(open<0 or close<0 or ct<0) return;
        else
        {
            s += '(';
            backtrack(open-1,close,ans,s,ct+1);
            s.pop_back();
            s += ')';
            backtrack(open,close-1,ans,s,ct-1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        backtrack(n,n,ans,s);
        return ans;
    }
};