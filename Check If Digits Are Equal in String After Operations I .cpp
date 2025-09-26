class Solution {
public:
    bool hasSameDigits(string s) {
        while(true)
        {
            string temp;
            for(int i=0;i<s.size()-1;i++)
            {
                temp.push_back((s[i]+s[i+1])%10);
            }
            if(temp.size()==2)
            {
                return temp[0]==temp[1];
            }
            else
            {
                s=temp;
            }
        }
        return 0;
    }
};