class Solution {
public:
    vector<int> minOperations(string boxes) {
       vector<int> onesIndexs;
       vector<int> result(boxes.size(),0);
       for(int i=0;i<boxes.size();i++)
       {
        if(boxes[i]=='1')
        onesIndexs.push_back(i);
       }
       for(int i=0;i<boxes.size();i++)
       {
        for(int j=0;j<onesIndexs.size();j++)
        {
            result[i]+=abs(onesIndexs[j]-i);
        }
       } 
       return result;
    }
};