class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int result=0;
        for(int i=0;i<sentences.size();i++)
        {
            int temp=count(sentences[i].begin(),sentences[i].end(),' ');
            result=max(temp,result);
        }
        return result+1;
    }
};