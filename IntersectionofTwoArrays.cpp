class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s,r,st;
        for(int i=0;i<nums1.size();i++)
        s.insert(nums1[i]);
        for(int i=0;i<nums2.size();++i)
        {
            st.insert(nums2[i]);
        }
        vector<int> result;
        for(auto value : s)
        {
            if(st.count(value))
            r.insert(value);
        }
        for(auto value : r)
        result.push_back(value);
        return result;
    }
};