class Solution {
public:
bool isVowel(char c)
{
    return c=='a' || c=='u' || c=='i' || c=='e' || c=='o';
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> pref(words.size()),result;

        for(int i=0;i<words.size();i++)
        {

            int size=words[i].size();

            if(i==0) {pref[i]=isVowel(words[i][0]) && isVowel(words[i][size-1]);}

            else     {pref[i]=pref[i-1] + (isVowel(words[i][0]) && isVowel(words[i][size-1]));}

        }

        for(auto v : queries)
        {
            if(v[0]==0) {result.push_back(pref[v[1]]);}
            
            else        {result.push_back(pref[v[1]]-pref[v[0]-1]);}
        }

        return result;
    }
};