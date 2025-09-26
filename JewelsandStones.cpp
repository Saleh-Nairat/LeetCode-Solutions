class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int result=0;
        multiset<char> st;
        for(int i=0;i<jewels.length();i++)
        st.insert(jewels[i]);
        for(int i=0;i<stones.length();++i)
        {
            if(st.count(stones[i]))
            result++;
        }
        return result;
    }
};