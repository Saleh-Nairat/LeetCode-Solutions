class Solution {
public:
bool isVowels(char c)
{
    return c=='a' || c=='u' || c=='i' || c=='e' || c=='o';
}
    bool doesAliceWin(string s) {
        int vowels=0;

        for(auto c : s)
        {
            if(isVowels(c)) {return true;}
        }

        return false;
    }
};