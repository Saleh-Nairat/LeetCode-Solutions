class Solution {
public:
    int countDigits(int num) {
        int result=0;
        int temp=num;

        while(temp)
        {
            int digit=temp%10;

            if(num%digit==0)
            result++;

            temp/=10;
        }
        return result;
    }
};