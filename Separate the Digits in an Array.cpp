class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();++i)
        {
            string s=to_string(nums[i]);
            for(int i=0;i<s.size();i++)
            {
                result.push_back(s[i]-'0');
            }
        }
        return result;
    }
};