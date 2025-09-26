class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int temp1=0,temp2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<10)
            temp1+=nums[i];
            else
            temp2+=nums[i];
        }
        int sum=temp1+temp2;
        return temp1>temp2||temp2>temp1;
    }
};