class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mp,mpp;
        int result=0;

        for(auto c : s)
        {
            mp[c]++;
        }

        for(auto c : t)
        {
            mpp[c]++;
        }

        for(char c='a';c<='z';c++)
        {
            result+=abs(mp[c]-mpp[c]);
        }

        return result/2;
    }
};