class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i,j=0;
        int c1=0,c2=0;
        for(i=0;i<name.length();)
        {
            char c = name[i];
            while(name[i] == c)
            {
                c1++;
                i++;
            }
            while(typed[j] == c)
            {
                c2++;
                j++;
            }
            if(c1>c2) return false;
                        c1 = c2 = 0;
        }
        if(j!=typed.length()) return false;
        return true;
    }
};