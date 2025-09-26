class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> les,gre,eq,result;




        for(auto value : nums)
        {
            if(value<pivot)
            {
                les.push_back(value);
            }
            else if(value>pivot)
            {
                gre.push_back(value);
            }
            else
            {
                eq.push_back(value);
            }
        }

        for(auto value : les)
        {
            result.push_back(value);
        }
        for(auto value : eq)
        {
            result.push_back(value);
        }
        for(auto value : gre)
        {
            result.push_back(value);
        }

       

       return result;
    }
};