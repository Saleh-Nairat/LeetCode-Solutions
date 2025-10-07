class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        vector<int> temp=nums;
        int result=nums.size(),bugs=0;

        sort(temp.begin(),temp.end());

        if(temp==nums) {return nums.size();}

        for(int i=0;i<result-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                bugs++;
                swap(nums[i],nums[i+1]);
            }
        }

        return result-bugs;
    }
};


/*
                                  Another Solution : 

class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int result=0,Maximum=INT_MIN;

        for(auto num : nums)
        {
            if(num>=Maximum)
            {
                result++;
                Maximum=num;
            }
        }

        return result;
    }
};

*/