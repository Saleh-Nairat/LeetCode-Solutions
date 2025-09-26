class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> result;
        map<int,int> mp;
        int seen=0;
        for(int i=0;i<A.size();i++)
        {
            mp[A[i]]++;
            if(mp[A[i]]==2)
            seen++;
            mp[B[i]]++;
            if(mp[B[i]]==2)
            seen++;
            result.push_back(seen);
        }
        return result;
    }
};