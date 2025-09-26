class Solution {
public:
    string makeSmallestPalindrome(string s) {
        for(int i=s.size()-1,j=0;i>=j;i--,j++)
        {
            if(s[i]!=s[j])
            {
                if(s[i]>s[j])
                s[i]=s[j];
                else
                s[j]=s[i];
            }
        }
        return s;
    }
};