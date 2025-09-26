class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> result;
        stringstream s(s1);
        string word;
        map<string,int> mp;
        while(s >> word)
        {
            mp[word]++;
        }
        stringstream ss(s2);
        string wordd;
        while(ss >> wordd)
        {
            mp[wordd]++;
        }
        for(auto [key,value] : mp)
        {
            if(value==1)
            result.push_back(key);
        }
        return result;
    }
};