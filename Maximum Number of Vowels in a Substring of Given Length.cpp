class Solution {
public:

bool isVowel(char c)
{
    return c=='a' || c=='u' || c=='i' || c=='e' || c=='o';
}


    int maxVowels(string s, int k) {
        int result=0,left=0,vowels=0,length=0;

        for(int right=0;right<s.size();right++)
        {
            if(isVowel(s[right])) {vowels++;}

            length++;

            while(length>k)
            {
                if(isVowel(s[left++])) {vowels--;}
                length--;
            }

            result=max(result,vowels);
        }

        return result;
    }
};


/*
                                 Another Solution : Sliding Window

class Solution {
public:

bool isVowel(char c)
{
    return c=='a' || c=='u' || c=='i' || c=='e' || c=='o';
}


    int maxVowels(string s, int k) {
        int result=0,vowels=0;

        for(int i=0;i<k;i++) 
        {
            if(isVowel(s[i])) {vowels++;}
        }

        result=vowels;

        for(int i=k;i<s.size();i++)
        {
            if(isVowel(s[i-k])) {vowels--;}
            if(isVowel(s[i]))   {vowels++;}

            result=max(result,vowels);
        }

        return result;
    }
};

*/