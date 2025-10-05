class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        set<pair<int,int>> st;
        vector<int> result;

        for(auto e : nums) {mp[e]++;}

        for(auto [key,value] : mp) {st.insert({value,key});}

        for(auto it=st.rbegin();it!=st.rend();it++)
        {
            result.push_back(it->second);
            k--;

            if(!k) {break;}
        }

        return result;
    }
};


/*
                                 Another Solution: Using Priority Queue 

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> q;
        vector<int> result;

        for(auto e : nums) {mp[e]++;}

        for(auto [key,value] : mp) {q.push({value,key});}

        while(k--)
        {
            result.push_back(q.top().second);
            q.pop();
        }

        return result;
    }
};

*/