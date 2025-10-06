class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> result;
        unordered_map<int,int> mp;

        for(auto num : nums) {mp[num]++;}

        for(auto num : nums)
        {
            if(mp[num]==1 && mp[num-1]==0 && mp[num+1]==0) {result.push_back(num);}
        }

        return result;
    }
};