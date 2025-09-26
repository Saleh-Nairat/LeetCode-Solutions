class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string result;
        string word;
        while(ss >> word)
        {
            if(word.length()<=2)
            {
                for(auto &c : word)
                {
                    c=tolower(c);
                }
                result+=word;
                result+=" ";
            }
            else
            {
                word[0]=toupper(word[0]);
                for(int i=1;i<word.length();i++)
                {
                    word[i]=tolower(word[i]);
                }
                result+=word;
                result+=" ";
            }
        }
        result.erase(prev(result.end()));
        return result;
    }
};