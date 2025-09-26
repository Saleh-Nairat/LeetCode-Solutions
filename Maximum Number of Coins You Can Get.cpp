class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int result=0;
        sort(piles.rbegin(),piles.rend());
        if(piles.size()==3)
        return piles[1];
        for(int i=1;i<piles.size()-2;i+=2)
        {
            result+=piles[i];
        }
        return result;
    }
};