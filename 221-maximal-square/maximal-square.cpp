/* class Solution {
public:

    int solve(vector<vector<char>>& matrix, int i, int j, int row, int col, int &maxi) {
        // base case
        if(i >= row || j>= col) {
            return 0;
        }
        //explore all 3 direction
        int right = solve(matrix, i, j + 1, row, col, maxi);
        int diagonal = solve(matrix, i + 1, j+1,row, col, maxi);
        int down = solve(matrix, i+1, j, row, col, maxi);

        if(matrix[i][j] == '1') {
            int ans = 1 + min(right, min(down, diagonal));
            maxi = max(maxi, ans);
            return ans;
        }
        else {
            //agar 0 per hi khade ho toh ans bhi zero hoga
            return 0;
        }
    } 

    int maximalSquare(vector<vector<char>>& matrix) {
        int i=0;
        int j=0;
        int row = matrix.size();
        int col = matrix[0].size();
        int maxi = 0;
        int ans = solve(matrix, i, j, row, col, maxi);
        return maxi*maxi;
        
    }
}; */

class Solution {
public:
    int solve(vector<vector<char>>& matrix, int i, int j, int row, int col,
              int &maxi, vector<vector<int>>& dp) {
        
        // base case
        if(i >= row || j >= col) {
            return 0;
        }

        // already calculated
        if(dp[i][j] != -1) {
            return dp[i][j];
        }

        // explore 3 directions
        int right = solve(matrix, i, j+1, row, col, maxi, dp);
        int diagonal = solve(matrix, i+1, j+1, row, col, maxi, dp);
        int down = solve(matrix, i+1, j, row, col, maxi, dp);

        if(matrix[i][j] == '1') {
            dp[i][j] = 1 + min(right, min(diagonal, down));
            maxi = max(maxi, dp[i][j]);
            return dp[i][j];
        }

        return dp[i][j] = 0;
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> dp(row, vector<int>(col, -1));
        int maxi = 0;

        solve(matrix, 0, 0, row, col, maxi, dp);

        return maxi * maxi;
    }
};