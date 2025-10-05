class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int result=0,l=0;
        map<int,int> mp;

        for(int r=0;r<nums.size();r++)
        {
            mp[nums[r]]++;

            while(mp[0]>1)
            {
                mp[nums[l++]]--;
            }

            result=max(result,r-l+1);
        }

        return --result;
    }
};