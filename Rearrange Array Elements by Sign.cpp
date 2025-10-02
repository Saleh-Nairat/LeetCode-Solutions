class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> negative,positive,result;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0) {negative.push_back(i);}

            else {positive.push_back(i);}
        }

        for(int i=0,j=0,k=0;i<nums.size()/2;i++)
        {
            result.push_back(nums[positive[j++]]);
            result.push_back(nums[negative[k++]]);
        }
        return result;
    }
};


/*
                                   another solution

       class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size(),0);
        int positive=0,negative=1;

        for(auto num : nums)
        {
            if(num < 0) {result[negative]=num;negative+=2;}

            else {result[positive]=num;positive+=2;}
        }
        return result;
    }
};        

*/