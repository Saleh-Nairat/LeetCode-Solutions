class Solution {
public:
int Binary_Search(vector<int> nums)
{
    int low=0,high=nums.size()-1;

    while(low<=high)
    {
        int mid=low +(high-low) / 2;

        if(low==high) {return mid;}

        if(nums[mid]<nums[mid+1]) {low=mid+1;}

        else if(nums[mid]>nums[mid+1]) {high=mid;}
    }
    return -1;
}
    int peakIndexInMountainArray(vector<int>& arr) {
        return Binary_Search(arr);
    }
};


/*
                    another solution O(n)
 
int peakIndexInMountainArray(vector<int>& arr) {
         return max_element(arr.begin(),arr.end())-arr.begin();
     }
};
*/