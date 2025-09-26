class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int counter=0;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            counter=0;
             for(int j=0;j<nums.size();j++)
             {
                if(i!=j&&nums[j]<nums[i])
                counter++;
             }
             result.push_back(counter);
        }
        return result;
    }
};