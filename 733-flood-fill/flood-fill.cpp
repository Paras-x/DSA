class Solution {
public:

    void dfs(int row, int col, int n, int m,
             vector<vector<int>>& image,
             vector<vector<int>>& vis,
             int newColor, int oldColor) {

        vis[row][col] = 1;
        image[row][col] = newColor;

        // Up
        if (row - 1 >= 0 &&
            !vis[row - 1][col] &&
            image[row - 1][col] == oldColor) {

            dfs(row - 1, col, n, m, image, vis, newColor, oldColor);
        }

        // Down
        if (row + 1 < n &&
            !vis[row + 1][col] &&
            image[row + 1][col] == oldColor) {

            dfs(row + 1, col, n, m, image, vis, newColor, oldColor);
        }

        // Left
        if (col - 1 >= 0 &&
            !vis[row][col - 1] &&
            image[row][col - 1] == oldColor) {

            dfs(row, col - 1, n, m, image, vis, newColor, oldColor);
        }

        // Right
        if (col + 1 < m &&
            !vis[row][col + 1] &&
            image[row][col + 1] == oldColor) {

            dfs(row, col + 1, n, m, image, vis, newColor, oldColor);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                  int sr, int sc, int color) {

        int n = image.size();
        int m = image[0].size();

        int oldColor = image[sr][sc];

        if (oldColor == color)
            return image;

        vector<vector<int>> vis(n, vector<int>(m, 0));

        dfs(sr, sc, n, m, image, vis, color, oldColor);

        return image;
    }
};