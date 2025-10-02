                            
                            /* Binary Search Solution */
class Solution {
public:
char binary_search(vector<char> letters,char target)
{
    char result=letters[0];
    int low=0,high=letters.size()-1;

    while(low<=high)
    {
        int mid=low + (high-low) / 2;

        if(letters[mid]>target)
        {
            result=letters[mid];
            high=mid-1;
        }

        else 
        {
            low=mid+1;
        }
    }
    return result;
}
    char nextGreatestLetter(vector<char>& letters, char target) {
        return binary_search(letters,target);
    }
};


/*
                          another solution using upper_bound() method 

       class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char> temp;

        for(char i='a';i<='z';i++) {temp.push_back(i);}

        for(auto it=upper_bound(temp.begin(),temp.end(),target);it!=temp.end();it++)
        {
            if(find(letters.begin(),letters.end(),*it)!=letters.end()) {return *it;}
        }
        
        return letters[0];
    }
};          

*/