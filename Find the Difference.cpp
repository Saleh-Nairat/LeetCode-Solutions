class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> ss,tt;
        for(int i=0;i<s.length();i++)
        ss[s[i]]++;
        for(int i=0;i<t.length();i++)
        tt[t[i]]++;
        for(int i=0;i<t.length();i++)
        {
            if(ss[t[i]]==tt[t[i]])
            continue;
            else
            return t[i];
        }
        return '-1';
    }
};