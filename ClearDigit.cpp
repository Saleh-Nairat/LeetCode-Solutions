class Solution {
public:
    string clearDigits(string s) {
        stack<char> stk;
        string result;

        for(auto c : s)
        {
            if(c>=48 && c<=57 && !stk.empty())
            stk.pop();
            else
            stk.push(c);
        }

        while(!stk.empty())
        {
            result+=stk.top();
            stk.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};