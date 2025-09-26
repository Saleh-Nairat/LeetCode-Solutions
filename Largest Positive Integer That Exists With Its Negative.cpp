class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        for(int i=0,j=nums.size()-1;j>=i;)
        {
            if(nums[i]==abs(nums[j])&&nums[i]!=nums[j])
            {
                return nums[i];
            }
            else if(nums[i]>abs(nums[j]))
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return -1 ;
    }
};