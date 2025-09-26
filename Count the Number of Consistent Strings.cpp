class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       unordered_set<char> st;
       int result=0;
       for(int i=0;i<allowed.length();i++)
       st.insert(allowed[i]);
       for(int i=0;i<words.size();i++)
       {
        bool found=true;
        for(int j=0;j<words[i].length();j++)
        {
            if(!st.count(words[i][j]))
            {
                found=false;
                break;
            }
        }
        if(found)
        result++;
       } 
       return result;
    }
};