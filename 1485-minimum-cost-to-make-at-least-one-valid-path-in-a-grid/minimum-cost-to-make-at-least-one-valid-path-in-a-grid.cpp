class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // Right, Left, Down, Up
        vector<pair<int, int>> dir = {
            {0, 1},
            {0, -1},
            {1, 0},
            {-1, 0}
        };

        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));

        priority_queue<
            vector<int>,
            vector<vector<int>>,
            greater<vector<int>>
        > pq;

        dist[0][0] = 0;
        pq.push({0, 0, 0}); // {cost, row, col}

        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();

            int cost = curr[0];
            int r = curr[1];
            int c = curr[2];

            if (r == m - 1 && c == n - 1)
                return cost;

            if (cost > dist[r][c])
                continue;

            for (int i = 0; i < 4; i++) {
                int nr = r + dir[i].first;
                int nc = c + dir[i].second;

                if (nr >= 0 && nr < m && nc >= 0 && nc < n) {
                    int newCost = cost;

                    // Agar direction match nahi karti to cost +1
                    if (grid[r][c] != i + 1)
                        newCost++;

                    if (newCost < dist[nr][nc]) {
                        dist[nr][nc] = newCost;
                        pq.push({newCost, nr, nc});
                    }
                }
            }
        }

        return dist[m - 1][n - 1];
    }
};