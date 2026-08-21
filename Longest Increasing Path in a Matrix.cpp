class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size() , n = matrix[0].size() , answer = 0; 
        // dp[i][j] represents the maximum length of an increasing path starting from cell (i, j).
        vector dp(m , vector<int>(n , -1));
        auto dfs = [&] (auto && dfs , int x , int y) -> int {
            if(~dp[x][y]){
                return dp[x][y];
            }
            int choice1 = 0 , choice2 = 0 , choice3 = 0 , choice4 = 0;
            if(x + 1 < m and matrix[x + 1][y] > matrix[x][y]){
                choice1 = dfs(dfs , x + 1 , y);
            }
            if(x - 1 >= 0 and matrix[x - 1][y] > matrix[x][y]){
                choice2 = dfs(dfs , x - 1 , y);
            }
            if(y + 1 < n and matrix[x][y + 1] > matrix[x][y]){
                choice3 = dfs(dfs , x , y + 1);
            }
            if(y - 1 >= 0 and matrix[x][y - 1] > matrix[x][y]){
                choice4 = dfs(dfs , x , y - 1);
            }
            return dp[x][y] = 1 + max({choice1 , choice2 , choice3 , choice4});
        };
        for(int i = 0 ; i < m ; ++i){
            for(int j = 0 ; j < n ; ++j){
                if(~dp[i][j]) continue;
                dfs(dfs , i , j);
            }
        }
        for(int i = 0 ; i < m ; ++i){
            for(int j = 0 ; j < n ; ++j){
                answer = max(answer , dp[i][j]);
            }
        }
        return answer;
    }
};
// problem link: https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/