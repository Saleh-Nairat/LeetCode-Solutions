class Solution {
public:
    int hammingWeight(int n) {
        int result=0;
        vector<int> nums;
        while(n)
        {
            if(n%2)
            {
            nums.push_back(1);
            result++;
            }
            else
            nums.push_back(0);
            n/=2;
        }
        return result;
    }
};