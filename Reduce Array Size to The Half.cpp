class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int size=arr.size(),result=0;
        unordered_map<int,int> mp;
        priority_queue<int> q;

        for(auto num : arr) {mp[num]++;}

        for(auto [key,value] : mp) {q.push(value);}

        while(size>arr.size()/2)
        {
            size-=q.top();
            q.pop();
            result++;
        }

        return result;
    }
};