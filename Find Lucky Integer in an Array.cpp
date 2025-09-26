class Solution {
public:
    int findLucky(vector<int>& arr) {
        int result=-1;
        map<int,int> mp;
        for(auto value : arr)
        {
            mp[value]++;
        }
        for(auto [key,value] : mp)
        {
            if(key==value)
            {
                if(key>result)
                {
                    result=key;
                }
            }
        }
        return result;
    }
};