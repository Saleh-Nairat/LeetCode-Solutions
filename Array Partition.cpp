class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
      int result=0;
      priority_queue<int> q;
      for(int i=0;i<nums.size();i++)
      {
        q.push(nums[i]);
      }
      while(!q.empty())
      {
        int num1=q.top();
        q.pop();
        int num2=q.top();
        q.pop();
        result+=min(num1,num2);
      }  
      return result;
    }
};