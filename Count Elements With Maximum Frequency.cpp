class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int result=0,maximum=0;
        map<int,int> mp;
        
        for(auto e : nums)
        {
            mp[e]++;
        }

        for(auto [key,value] : mp)
        {
            if(value>maximum)
            maximum=value;
        }

        for(auto [key,value] : mp)
        {
            if(value==maximum)
            result+=value;
        }

        return result;
    }
};