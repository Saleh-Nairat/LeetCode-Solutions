class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        stack<int> s;
        for(int i =0;i<nums.size();i++)
        {
            if(nums.at(i)!=val)
            s.push(nums.at(i));
        }
        nums.clear();
        while(!s.empty())
    {
            nums.push_back(s.top());
            s.pop();
    }
        return nums.size();
    }
};