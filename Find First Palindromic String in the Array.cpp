class Solution {
public:
bool ispal(string s)
{
    string temp=s;
    reverse(temp.begin(),temp.end());
    return temp==s;
}
    string firstPalindrome(vector<string>& words) {
        for(auto s : words)
        {
            if(ispal(s))
            return s;
        }
        return "";
    }
};