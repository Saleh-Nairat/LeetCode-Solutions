class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num),temp1,temp2;

        sort(s.begin(),s.end());

        temp1=s[0];
        temp1+=s[3];
        temp2=s[1];
        temp2+=s[2];

        return stoi(temp1)+stoi(temp2);
    }
};