class Solution {
public:
string conv(int n,int b)
{
    string result;
    while(n)
    {
        int digit=n%b;
        if(digit<10)
        result+='0'+digit;
        else
        {
            result+='A' + (digit-10);
        }
        n/=b;
    }
    reverse(result.begin(),result.end());
    return result.empty()?"0":result;
}
bool ispal(string s)
{
    string temp=s;
    reverse(temp.begin(),temp.end());
    return temp==s;
}
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++)
        {
            string s=conv(n,i);
            if(!ispal(s))
            {
                return false;
            }
        }
        return true;
    }
};