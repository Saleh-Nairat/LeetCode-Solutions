class Solution {
public:
    int countKeyChanges(string s) {
        int result=0;
        for(int i=0;i<s.length()-1;i++)
        {
            s[i]=tolower(s[i]);
            s[i+1]=tolower(s[i+1]);
            if(s[i]!=s[i+1])
            result++;
        }
        return result;
    }
};