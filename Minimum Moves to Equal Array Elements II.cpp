class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result=0,mid;

        mid=(nums.size()%2?nums.size()/2 : nums.size()/2-1);

        for(int i=0;i<nums.size();i++)
        {
            result+=abs(nums[i]-nums[mid]);
        }

        return result;
    }
};