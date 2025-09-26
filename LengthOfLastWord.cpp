class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0,i=s.length()-1;
        if(s.length()==1) return 1;
        if(s[i]==' ')
        {
            while(s[i]==' ')
            {
            i--;
            if(i<0)
            break;
            }
        }
        while(s[i]!=' ')
        {
            i--;
            len++;
            if(i<0)
            break;
        }
        return len;
    }
};