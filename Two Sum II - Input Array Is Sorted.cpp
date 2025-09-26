class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       map<int,int> mp;
       for(int i=0;i<numbers.size();i++)
       {
         if(mp.find(numbers[i])!=mp.end())
         return {mp[numbers[i]],i+1};
         else
         {
            mp[target-numbers[i]]=i+1;
         }
       } 
       return {-1,-1};
    }
};