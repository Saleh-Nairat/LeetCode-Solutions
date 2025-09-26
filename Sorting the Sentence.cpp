class Solution {
public:
    string sortSentence(string s) {
        string result;
        map<int,string> mp;
        stringstream ss(s);
        string word;
        while(ss >> word)
        {
            mp[word[word.size()-1]-'0']=word;
        }
        for(auto [key,value] : mp)
        {
            result+=value;
            result+=" ";
        }
        for(int i=0;i<result.size();i++)
        {
            if(result[i]>=48&&result[i]<=57)
            result.erase(i,1);
        }
        result.erase(result.size()-1,1);
        return result;
    }
};