class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int result=0;
        int value=*max_element(nums.begin(),nums.end());
        while(k--)
        {
            result+=value;
            value++;
        }
        return result;
    }
};