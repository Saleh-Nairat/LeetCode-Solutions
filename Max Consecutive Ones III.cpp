class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int result=0,left=0;

        unordered_map<int,int> mp;

        for(int right=0;right<nums.size();right++)
        {
            mp[nums[right]]++;

            while(mp[0]>k)
            {
                mp[nums[left++]]--;
            }

            result=max(result,right-left+1);
        }

        return result;
    }
};