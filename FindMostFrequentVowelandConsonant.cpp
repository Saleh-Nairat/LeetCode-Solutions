class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> mp;
        int maxv=0,maxcons=0;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            if(s[i]=='a' || s[i]=='e' ||
            s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
            maxv=max(maxv,mp[s[i]]);
            }
            else
            {
                maxcons=max(maxcons,mp[s[i]]);
            }
        }
        int sum=maxcons+maxv;
        return sum;
    }
};