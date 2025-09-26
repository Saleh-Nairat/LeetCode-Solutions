class Solution {
public:
int rev(string s)
{
    reverse(s.begin(),s.end());
    return stoi(s);
}
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> result;
        for(int i=0;i<nums.size();i++)
        {
            result.insert(nums[i]);
            result.insert(rev(to_string(nums[i])));
        }
        return result.size();
    }
};