/* class Solution {
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
}; */

 class Solution {
public:
    int m, n;
    vector<vector<int>> width;

    int solve(int row, int col, vector<vector<char>>& matrix) {

        if(matrix[row][col] == '0')
            return 0;

        int minWidth = INT_MAX;
        int maxi = 0;

        for(int i = row; i < m; i++) {

            if(width[i][col] == 0)
                break;

            minWidth = min(minWidth, width[i][col]);

            int height = i - row + 1;

            maxi = max(maxi, minWidth * height);
        }

        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {

        if(matrix.empty()) return 0;

        m = matrix.size();
        n = matrix[0].size();

        width.assign(m, vector<int>(n, 0));

        // DP preprocessing
        for(int i = 0; i < m; i++) {
            for(int j = n - 1; j >= 0; j--) {

                if(matrix[i][j] == '1') {
                    width[i][j] = 1;

                    if(j + 1 < n)
                        width[i][j] += width[i][j + 1];
                }
            }
        }

        int ans = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                ans = max(ans, solve(i, j, matrix));
            }
        }

        return ans;
    }
}; 

/* class Solution {
public:

    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        int maxi = 0;

        for(int i = 0; i <= n; i++) {

            int currHeight = (i == n) ? 0 : heights[i];

            while(!st.empty() && heights[st.top()] > currHeight) {

                int h = heights[st.top()];
                st.pop();

                int left = st.empty() ? -1 : st.top();
                int width = i - left - 1;

                maxi = max(maxi, h * width);
            }

            st.push(i);
        }

        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {

        if(matrix.empty()) return 0;

        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> heights(n, 0);

        int ans = 0;

        for(int i = 0; i < m; i++) {

            for(int j = 0; j < n; j++) {

                if(matrix[i][j] == '1')
                    heights[j]++;
                else
                    heights[j] = 0;
            }

            ans = max(ans, largestRectangleArea(heights));
        }

        return ans;
    }
}; */