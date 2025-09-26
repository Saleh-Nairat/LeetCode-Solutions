class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int result=0;
        unordered_set<int> used;
        for(int i=0;i<words.size();i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                string temp=words[j];
                reverse(temp.begin(),temp.end());
                if(temp==words[i]&&!used.count(j))
                {
                    result++;
                    used.insert(j);
                }
            }
        }
        return result;
    }
};
