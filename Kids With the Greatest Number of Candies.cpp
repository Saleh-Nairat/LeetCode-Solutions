class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int goal=*max_element(candies.begin(),candies.end());
        vector<bool> result;
        for(auto e : candies)
        {
            if(e+extraCandies>=goal)
            result.push_back(true);
            else
            result.push_back(false);
        }
        return result;
    }
};