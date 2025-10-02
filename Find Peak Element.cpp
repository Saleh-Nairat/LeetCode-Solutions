class Solution {
public:
int binary_search(vector<int> nums)
{
    int low=0,high=nums.size()-1;

    while(low<=high)
    {
        if(low==high) {return low;}

        int mid=low + (high - low) / 2;

        if(nums[mid] <= nums[mid+1]) {low=mid+1;}

        else {high=mid;}
    }
    return -1;
}
    int findPeakElement(vector<int>& nums) {
        if(nums.size()>1 && nums[0]>nums[1]) {return 0;}
        if(nums.size()>1 && nums[nums.size()-1]>nums[nums.size()-2]) {return nums.size()-1;}

        return binary_search(nums);
    }
};



/*
                                  another solution O(n)

    class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()>1 && nums[0]>nums[1]) {return 0;}
        if(nums.size()>1 && nums[nums.size()-1]>nums[nums.size()-2]) {return nums.size()-1;}
        return max_element(nums.begin(),nums.end())-nums.begin();
    }
};
*/