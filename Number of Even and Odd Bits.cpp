class Solution {
public:
string conv(int n)
{
    string result;
    while(n)
    {
        if(n%2)
        result+='1';
        else
        result+='0';
        n/=2;
    }
    return result;
}
    vector<int> evenOddBit(int n) {
        string s=conv(n);
        int odds=0,evens=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                if(i%2)
                odds++;
                else
                evens++;
            }
        }
        return {evens,odds};
    }
};