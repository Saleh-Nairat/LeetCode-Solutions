class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        int result;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto [key,value] : mp)
        {
            if(value==1)
            {
                result=key;
                break;
            }
        }
        return result;
    }
};