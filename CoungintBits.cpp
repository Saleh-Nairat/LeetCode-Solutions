class Solution {
public:
  int   conutones(int num)
     {
        int counter=0;
        while(num)
        {
            if(num%2)
            counter++;
            num/=2;
        }
        return counter;
     }
    vector<int> countBits(int n) {
        vector<int> result;
       for(int i=0;i<=n;++i)
       {
        result.push_back(conutones(i));
       } 
       return result;
    }
};