class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> mp;
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto [key,value] : mp)
        {
            if(value==1)
            result+=key;
        }
        return result;
    }
};