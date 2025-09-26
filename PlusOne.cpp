class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.at(digits.size()-1)<9)
        {
            digits.at(digits.size()-1)++;
            return digits;
        }
        else
        {
            int i=digits.size()-1;
            while(digits.at(i)==9)
            {
                digits.at(i)=0;
                i--;
                if(i<0)
                {
                    ++i;
                break;
                }
            }
            if(i==0)
            {
                if(digits.at(i)==0)
                digits.insert(digits.begin(),1);
                else
                digits.at(i)++;
            }
            else
            digits.at(i)++;
            return digits;
        }
    }
};