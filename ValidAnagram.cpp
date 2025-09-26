class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<bool> found;
        if(s.length()!=t.length())
        return false;
        map<char,int> m,mp;
        for(int i=0;i<s.length();++i)
        {
            m[s[i]]++;
            mp[t[i]]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i]]!=m[s[i]])
            return false;
        }
        return true;
    }
};