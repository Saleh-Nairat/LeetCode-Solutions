class Solution {
public:
    string reverseWords(string s) {
        string result;
       stringstream ss(s);
       string word;
       int i=0;
       while(ss >> word)
       {
            reverse(word.begin(),word.end());
            result+=word;
            result+=" ";
            i++;
       }
       result.erase(result.length()-1); 
       return result;
    }
};