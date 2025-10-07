class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int result=0,temp=0,avg=0;

        for(int i=0;i<k;i++)  {temp+=arr[i];}

        avg=temp/k;

        if(avg>=threshold) {result++;}

        for(int i=k;i<arr.size();i++)
        {
            temp+=arr[i]-arr[i-k];
            avg=temp/k;

            if(avg>=threshold) {result++;}
        }

        return result;
    }
};