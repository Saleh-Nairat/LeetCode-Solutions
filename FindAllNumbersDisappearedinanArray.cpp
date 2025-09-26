class Solution {
public:
int bs(vector<int> nums,int value)
{
    sort(nums.begin(),nums.end());
    int left=0,right=nums.size()-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(nums[mid]==value)
        return mid;
        else if(nums[mid]>value)
        right=mid-1;
        else
        left=mid+1;
    }
    return -1;
}
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        for(int i=1;i<=nums.size();i++)
        {
            if(bs(nums,i)==-1)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};