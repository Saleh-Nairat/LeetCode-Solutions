class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>> g(n);
        vector<bool> visited(n);
        int connected_component_size = 0 , curr = 0;
        long long answer = 0;
        for(auto edge : edges){
            g[edge[0]].push_back(edge[1]);
            g[edge[1]].push_back(edge[0]);
        }
        auto dfs = [&] (auto && dfs , int u) -> void {
            ++connected_component_size;
            visited[u] = true;
            for(int child : g[u]){
                if(not visited[child]){
                    dfs(dfs , child);
                }
            }
        };
        for(int i = 0 ; i < n ; ++i){
            if(not visited[i]){
                connected_component_size = 0;
                dfs(dfs , i);
                curr += connected_component_size;
                answer += (long long) connected_component_size * (n - curr);
            }
        }
        return answer;
    }
};