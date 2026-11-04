class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& dp) {
        int n = grid.size();
        int m = grid[0].size();

        if (i >= n || j >= m) {
            return INT_MAX;
        }

        if (i == n - 1 && j == m - 1) {
            return grid[i][j];
        }

        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        int down = dfs(grid, i + 1, j, dp);
        int right = dfs(grid, i, j + 1, dp);

        return dp[i][j] = grid[i][j] + min(down, right);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return dfs(grid, 0, 0, dp);
    }
};