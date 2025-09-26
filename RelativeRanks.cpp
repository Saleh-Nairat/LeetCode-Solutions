class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> result;
        vector<int> temp=score;
        sort(temp.rbegin(),temp.rend());
        unordered_map<int,int> rank;
        for(int i=0;i<temp.size();++i)
        {
            rank[temp[i]]=i+1;
        }
        for(auto value : score)
        {
            if(rank[value]==1)result.push_back("Gold Medal");
            else if(rank[value]==2)result.push_back("Silver Medal");
            else if(rank[value]==3)result.push_back("Bronze Medal");
            else
            result.push_back(to_string(rank[value]));
        }
        return result;
    }
};