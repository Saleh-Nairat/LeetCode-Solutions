class Solution {
public:
int sumOfDigit(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
    int differenceOfSum(vector<int>& nums) {
        int sum1=0,sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            sum1+=nums[i];
            sum2+=sumOfDigit(nums[i]);
        }
        return abs(sum1-sum2);
    }
};