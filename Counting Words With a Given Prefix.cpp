class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int result=0;

        for(auto word : words)
        {
            if(word.size()>=pref.size() && word.substr(0,pref.size())==pref)
            result++;
        }
        return result;
    }
};