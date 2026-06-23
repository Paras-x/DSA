class Solution {
public:

    int solve(vector<vector<char>>& matrix, int row, int col) {
        int m = matrix.size();
        int n = matrix[0].size();

        if(matrix[row][col] == '0')
            return 0;

        int minWidth = INT_MAX;
        int maxi = 0;

        for(int i = row; i < m; i++) {

            int width = 0;

            for(int j = col; j < n && matrix[i][j] == '1'; j++) {
                width++;
            }

            if(width == 0)
                break;

            minWidth = min(minWidth, width);

            int height = i - row + 1;

            maxi = max(maxi, minWidth * height);
        }

        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        int ans = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                ans = max(ans, solve(matrix, i, j));
            }
        }

        return ans;
    }
};