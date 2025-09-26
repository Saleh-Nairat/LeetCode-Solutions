class Solution {
public:
    int getLucky(string s, int k) {
        string temp;
        int result=0;
        for(int i=0;i<s.length();i++)
        {
            temp+=to_string(s[i]-'a'+1);
        }
        while(k--)
        {
            result=0;
            for(int i=0;i<temp.length();i++)
            {
                result+=(temp[i]-'0');
            }
            temp=to_string(result);
        }
        return result;
    }
};