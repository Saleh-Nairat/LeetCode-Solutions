class Solution {
public:
int bsf(vector<int> &nums,int target)
{
    int result=-1;
    int l=0,r=nums.size()-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(nums[mid]==target)
        {
            result=mid;
            l=mid+1;
        }
        else if(nums[mid]>target)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return result;
}
int bsl(vector<int> &nums,int target)
{
    int result=-1;
    int l=0,r=nums.size()-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(nums[mid]==target)
        {
            result=mid;
            r=mid-1;
        }
        else if(nums[mid]>target)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return result;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        return {bsl(nums,target),bsf(nums,target)};
    }
};