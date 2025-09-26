class Solution {
public:
int sumOfDigit(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
    int countLargestGroup(int n) {
        map<int,int> mp;
        int res=0;
        for(int i=1;i<=n;i++)
        {
            mp[sumOfDigit(i)]++;
        }
        int result=0;
        for(auto [key,value] : mp)
        {
            if(value>=result)
            result=value;
        }
        for(auto [key,value] : mp)
        if(value==result)
        res++;
        return res;
    }
};