class Solution {
public:
    string findCommonResponse(vector<vector<string>>& res) {
        vector<set<string>> v;
        for(int i=0;i<res.size();i++)
        {
            set<string> st;
            for(int j=0;j<res[i].size();j++)
            {
                st.insert(res[i][j]);
            }
            v.push_back(st);
        }
        map<string,int> mp;
        for(int i=0;i<v.size();i++)
        {
            for(auto it=v[i].begin();it!=v[i].end();it++)
            mp[*it]++;
        }
        int result=0;
        string s;
        for(auto [key,value] : mp)
        {
            if(value>result)
            {
                result=value;
                s=key;
            }
            else if(value==result)
            {
                if(key<s)
                s=key;
            }
        }
        return s;
    }
};