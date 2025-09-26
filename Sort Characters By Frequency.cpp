class Solution {
public:
    string frequencySort(string s) {
        string result;
        map<char,int> mp;
        for(char c : s)
        mp[c]++;
        vector<pair<int,char>> v;
        for(auto [key,value] : mp)
        {
            pair<int,char> p(value,key);
            v.push_back(p);
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].first;j++)
            result+=v[i].second;
        }
        return result;
    }
};