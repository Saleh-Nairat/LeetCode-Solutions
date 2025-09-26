class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string temp;
        for(auto s : words)
        temp+=s[0];
        return temp==s;
    }
};