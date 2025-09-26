class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==1)
        return {0};
        vector<int> result;
        if(n%2)
        {
        int temp=1;
        for(int i=0;i<n/2;i++)
        { 
            result.push_back(-temp);
            temp++;
        }
        --temp;
        if(n%2)
        result.push_back(0);
        for(int i=n/2+1;i<n;i++)
        {
            result.push_back(temp);
            temp--;
        }
        }
        else
        {
            int temp=1;
            for(int i=0;i<=n/2-1;i++)
            {
                result.push_back(temp++);
            }
            temp--;
            for(int i=n/2;i<n;i++)
            {
                result.push_back(-temp);
                temp--;
            }
        }
        return result;

    }
};