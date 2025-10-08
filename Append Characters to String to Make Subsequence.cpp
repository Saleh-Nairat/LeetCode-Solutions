class Solution {
public:
    int appendCharacters(string s, string t) {
        int result=t.size();


        int i=0,j=0;
        while(i<s.size() && j<t.size())
        {
            if(s[i]==t[j]) {result--;j++;}

            i++;
        }

        return result;
    }
};