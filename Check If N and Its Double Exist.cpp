class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> st;

        if(count(arr.begin(),arr.end(),0)>1) {return true;}

        for(auto num : arr)
        {
            if(num!=0)
            st.insert(2*num);
        }

        for(auto num : arr)
        {
            if(st.count(num)) {return true;}
        }

        return false;
    }
};


/*
                    Another Solution: Brute Force

     class Solution {
public:
    bool checkIfExist(vector<int>& arr) {

        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if(i!=j && (arr[i]==2*arr[j] || arr[j]==2*arr[i])) {return true;}
            }
        }
        return false;
    }
}; 
*/