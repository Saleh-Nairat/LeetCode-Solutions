class Solution {
public:
    int hammingDistance(int x, int y) {
        int result=0;
        string s1=bitset<32>(x).to_string();
        string s2=bitset<32>(y).to_string();
        for(int i=0;i<s1.length();i++)
        if(s1[i]!=s2[i])
        result++;
        return result;
    }
};