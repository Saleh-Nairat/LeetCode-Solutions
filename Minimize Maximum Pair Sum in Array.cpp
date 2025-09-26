class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int result=0;
        sort(nums.begin(),nums.end());
        for(int i=0,j=nums.size()-1;j>=i;j--,i++)
        {
            result=max(result,nums[i]+nums[j]);
        }
        return result;
    }
};