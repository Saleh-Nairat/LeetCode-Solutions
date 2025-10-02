class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> result(2);
        vector<int> nums;
        unordered_map<int,int> mp;

        for(auto v : matches)
        {
            nums.push_back(v[0]);
            nums.push_back(v[1]);
            mp[v[1]]++;
        }

        for(auto [key,value] : mp)
        {
            if(value==1) {result[1].push_back(key);}
        }

        for(auto num : nums)
        {
            if(mp[num]==0) {result[0].push_back(num);mp[num]++;}
        }

        sort(result[0].begin(),result[0].end());
        sort(result[1].begin(),result[1].end());
        return result;
    }
};