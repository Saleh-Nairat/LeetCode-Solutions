class Solution {
public:
    int longestPalindrome(string s) {
        bool found=false;
        int result=0;
        map<char,int> mp;
        for(int i=0;i<s.length();++i)
        {
            mp[s[i]]++;
        }
        for(auto [key,value] : mp)
        {
            if(value%2==0)
            {
                result+=value;
            }
            else
            {
                result+=--value;
                found=true;
            }
        }
        return found?++result:result;
    }
};