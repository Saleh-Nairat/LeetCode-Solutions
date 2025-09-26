class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left;i<=right;i++)
        {
            bool found=true;
            int temp=i;
            while(temp)
            {
                int digit=temp%10;
                if(digit==0||i%digit!=0)
                {
                found=false;
                break;
                }
                temp/=10;
            }
            if(found)
            result.push_back(i);
        }
        return result;
    }
};