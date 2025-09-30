class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mp;

        for(auto num : nums) {mp[num]++;}

        nums.clear();

        for(auto [key,value] : mp)
        {
            for(int i=0;i<value;i++) {nums.push_back(key);}
        }
    }
};