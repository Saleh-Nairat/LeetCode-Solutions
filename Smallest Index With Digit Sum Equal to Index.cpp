class Solution {
public:
bool sum(int num,int index)
{
    int s=0;
    while(num)
    {
        s+=num%10;
        num/=10;
    }
    return s==index;
}
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(sum(nums[i],i))
            return i;
        }
        return -1;
    }
};