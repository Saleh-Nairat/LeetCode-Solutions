class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> freqS,freqT;
        int result=0;

        for(auto c : s) {freqS[c]++;}
        for(auto c : t) {freqT[c]++;}

        for(char c='a';c<='z';c++)
        {
            result+=abs(freqS[c]-freqT[c]);
        }
        
        return result;
    }
};