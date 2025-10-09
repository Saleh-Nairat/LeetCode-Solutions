class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long result=0;

        priority_queue<int> q;

        for(auto num : nums) {q.push(num);}

        while(k--)
        {
            int Maximum=q.top();
            q.pop();
            q.push((Maximum-1)/3+1);  //ceil(Maximum/3)

            result+=Maximum;
        }

        return result;
    }
};