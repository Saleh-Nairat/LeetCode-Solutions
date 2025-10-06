class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> mp;
        vector<vector<int>> result;

        for(int i=0;i<groupSizes.size();i++)
        {
            mp[groupSizes[i]].push_back(i);
        }

        for(auto [key,value] : mp)
        {
            vector<int> temp;
            
            for(int i=0;i<value.size();i++)
            {
                temp.push_back(value[i]);
                if(temp.size()==key){result.push_back(temp);temp.clear();}
            }
        }

        return result;
    }
};