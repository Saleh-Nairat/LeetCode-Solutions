class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        for(int &num : nums)
        {
            num=num*num;
        }
        sort(nums.begin(),nums.end());
        return result;
    }
};