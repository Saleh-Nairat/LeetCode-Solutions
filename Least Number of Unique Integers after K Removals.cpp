class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>> v;
        int result=0;

        for(auto num : arr) {mp[num]++;}
        result=mp.size();

        for(auto [key,value] : mp) {v.push_back({value,key});}

        sort(v.begin(),v.end());
        
        for(auto &p : v)
        {
            int remove=min(k,p.first);

            k-=remove;
            p.first-=remove;

            if(p.first==0) {result--;}
            
            else {break;}
        }
        
        return result;
    }
};