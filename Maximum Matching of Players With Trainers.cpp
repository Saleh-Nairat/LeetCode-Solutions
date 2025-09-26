class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int result=0;
        sort(trainers.begin(),trainers.end());
        sort(players.begin(),players.end());
        for(int i=trainers.size()-1,j=players.size()-1;i>=0&&j>=0;)
        {
            if(trainers[i]>=players[j])
            {
                result++;
                j--;
                i--;
            }
            else
            {
                j--;
            }
        }
        return result;
    }
};