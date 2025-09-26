class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      map<int,int> mp;
      for(int i=0;i<arr.size();i++)
      {
        mp[arr[i]]++;
      }
      set<int> s;
      multiset<int> st;
      for(auto [key,value] : mp)
      {
        s.insert(value);
        st.insert(value);
      }
      return s.size()==st.size();
    }
};