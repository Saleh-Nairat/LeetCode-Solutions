class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        int size = (int) bombs.size() , in_range = 0 , answer = 1;
        vector<vector<int>> graph(size);
        vector<bool> visited(size);
        for(int i = 0 ; i < size ; ++i){  
            for(int j = 0 ; j < size ; ++j){
                if(i == j) continue;
                // calculate the distance
                if(bombs[i][2] >= sqrtl(powl(abs(bombs[i][0] - bombs[j][0]) , 2) + powl(abs(bombs[i][1] - bombs[j][1]) , 2))){
                    graph[i].push_back(j);
                }
            }
        }
        function<void(int)> dfs = [&] (int u) -> void {
            visited[u] = true;
            ++in_range;
            for(int child : graph[u]){
                if(not visited[child])
                    dfs(child);
            }
        };  
        for(int i = 0 ; i < size ; ++i){
            visited.assign(size , false);
            in_range = 0;
            dfs(i);
            answer = max(answer , in_range);
        }
        return answer;
    }
};