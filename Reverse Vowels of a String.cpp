class Solution {
public:
bool isv(char a)
{
    return a=='a'|a=='A'||a=='e'||a=='E'||a=='u'||a=='U'||a=='i'||a=='I'||a=='o'||a=='O';
}
    string reverseVowels(string s) {
        for(int i=s.length()-1,j=0;i>=j;i--,j++)
        {
            if(isv(s[i])&&isv(s[j]))
            {
                swap(s[i],s[j]);
            }
            else if(isv(s[i])&&!isv(s[j]))
            {
                i++;
            }
            else if(!isv(s[i])&&isv(s[j]))
            {
                j--;
            }
        }
        return s;
    }
};