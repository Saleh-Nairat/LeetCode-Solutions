class Solution {
public:
    long long smallestNumber(long long num) {
        bool negative=false;
        if(num<0) {num=-num;negative=true;}

        string temp=to_string(num);

        if(negative) {sort(temp.rbegin(),temp.rend());}

        else         {sort(temp.begin(),temp.end());}

        if(temp[0]=='0')
        {
            for(int i=0;i<temp.size();i++)
            {
                if(temp[i]!='0') {swap(temp[0],temp[i]);break;}
            }
        }
        
        num=stoll(temp);
        return negative?-num:num;
    }
};