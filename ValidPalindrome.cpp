class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=97&&s[i]<=122)
            temp+=s[i];
            else if(s[i]>=65&&s[i]<=90)
            {
                s[i]=tolower(s[i]);
                temp+=s[i];
            }
            else if(s[i]>=48&&s[i]<=57)
            temp+=s[i];
        }
        bool found=true;
        for(int i=temp.length()-1,j=0;i>=j;i--,j++)
        {
            if(temp[i]!=temp[j])
            {
                found=false;
                break;
            }
        }
        return found;
    }
};