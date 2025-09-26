class Solution {
public:
int CountDigit(int num)
{
    int result=0;
    while(num)
    {
        result++;
        num/=10;
    }
    return result;
}
    int findNumbers(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            if(CountDigit(nums[i])%2==0)
            result++;
        }
        return result;
    }
};