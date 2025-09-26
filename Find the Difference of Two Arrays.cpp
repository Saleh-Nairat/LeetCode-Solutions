class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1,st2;
        for(auto e : nums1)
        {
            if(find(nums2.begin(),nums2.end(),e)==nums2.end())
            {
                st1.insert(e);
            }
        }
        for(auto e : nums2)
        {
            if(find(nums1.begin(),nums1.end(),e)==nums1.end())
            st2.insert(e);
        }
        vector<int> result1,result2;
        for(auto e : st1)
        {
            result1.push_back(e);
        }
        for(auto e: st2)
        {
            result2.push_back(e);
        }
        return {result1,result2};
    }
};