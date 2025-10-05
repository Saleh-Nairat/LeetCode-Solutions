class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int result=0,l=0;
        unordered_map<int,int> mp;

        for(int r=0;r<nums.size();r++)
        {
            mp[nums[r]]++;

            while(mp[nums[r]]>k)
            {
                mp[nums[l]]--;
                l++;
            }

            result=max(result,r-l+1);
        }

        return result;
    }
};