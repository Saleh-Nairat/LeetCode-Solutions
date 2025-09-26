class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int times=nums.size()/2;
       int item;
       map<int,int> mp;
       for(int i=0;i<nums.size();i++)
       {
           mp[nums[i]]++;
           if(mp[nums[i]]>times)
           return nums[i];
       }
       return -1;
    }
};