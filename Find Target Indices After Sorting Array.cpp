class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int value1=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int value2=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        vector<int> result;
        
        for(int i=value1;i<value2;i++)
        {
            result.push_back(i);
        }
        return result;
    }
};