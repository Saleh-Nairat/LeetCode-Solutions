class Solution {
public:
    string generateTheString(int n) {
        string result;
        if(n%2)
       {
          for(int i=1;i<=n;i++)
          result+='a';
        }
        else
        {
            for(int i=1;i<n;i++)
            result+='a';
            result+='b';
        }
        return result;
    }
};