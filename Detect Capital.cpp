class Solution {
public:
    bool detectCapitalUse(string word) {
        bool found=true;
        for(int i=1;i<word.size();i++)
        {
            if(islower(word[i]) && isupper(word[0]))
            {
                continue;
            }
            else
            {
                found=false;
                break;
            }
        }
        if(found) return true;
        found=true;
        for(int i=0;i<word.size();i++)
        {
            if(isupper(word[i]))
            continue;
            else
            {
                found=false;
                break;
            }
        }
        if(found) return true;
        found=true;
        for(int i=0;i<word.size();i++)
        {
            if(islower(word[i]))
            continue;
            else
            {
                found=false;
                break;
            }
        }
        if(found) return true;
        return false;
    }
};