class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums.at(i)+nums.at(j)==target)
                {
                    result.push_back(j);
                    result.push_back(i);
                }
            }
        }
    return result;
    }
};