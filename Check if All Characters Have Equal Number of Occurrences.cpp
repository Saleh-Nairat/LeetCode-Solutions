class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> mp;
        for(char c: s)
        {
            mp[c]++;
        }
        int value=mp[s[0]];
        for(auto [key,a] : mp)
        {
            if(value!=a)
            return false;
        }
        return true;
    }
};