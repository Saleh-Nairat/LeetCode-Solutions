class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> teams(n + 1 , -1);
        vector<vector<int>> g(n + 1);
        bool ok = true;
        for(int i = 0 ; i < (int) dislikes.size() ; ++i){
            g[dislikes[i][0]].push_back(dislikes[i][1]);
            g[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        auto bfs = [&] (auto && bfs , int n) -> bool {
            queue<int> q;
            q.push(n);
            teams[n] = 1;
            while(q.size()){
                int u = q.front();
                q.pop();
                for(int child : g[u]){
                    if(~teams[child]){
                        if(teams[child] == teams[u]){
                            return false;
                        }
                    }
                    else{
                        teams[child] = teams[u] == 1 ? 2 : 1;
                        q.push(child);
                    }
                }
            }
            return true;
        };
        for(int i = 1 ; i <= n ; ++i){
            if(~teams[i]) continue;
            ok &= bfs(bfs , i);
        }
        return ok;
    }
};
// problem link: https://leetcode.com/problems/possible-bipartition/description/