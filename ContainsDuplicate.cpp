class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto value : nums)
        {
            mp[value]++;
            if(mp[value]>1)
            return true;
        }
        return false;
    }
};