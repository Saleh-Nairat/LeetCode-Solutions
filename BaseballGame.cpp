class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> result;
        for(int i=0;i<operations.size();i++)
        {
         if(operations[i]=="+")
            {
                if(result.size()>=2)
                {
                    result.push_back(result[result.size()-1]+result[result.size()-2]);
                }
                else
                {
                    result.push_back(result[0]);
                }
            }
            else if(operations[i]=="D")
            {
                if(result.size()>=1)
                result.push_back(result[result.size()-1]*2);
            }
            else if(operations[i]=="C")
            {
                if(!result.empty())
                {
                    result.pop_back();
                }
            }
            else 
            {
                result.push_back(stoi(operations[i]));
            }
        }
        int sum=0;
        for(auto value : result)
        {
            sum+=value;
        }
        return sum;
    }
};