class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        map<int,int> mp;
        int result=0;
        for(auto bar : costs)
        {
            mp[bar]++;
        }
        for(auto [key,value] : mp)
        {
            if(value*key<=coins)
            {
                coins-=value*key;
                result+=value;
            }
            else
            {
                coins-=coins/key*key;
                result+=coins/key;
            }
        }
        return result;
    }
};