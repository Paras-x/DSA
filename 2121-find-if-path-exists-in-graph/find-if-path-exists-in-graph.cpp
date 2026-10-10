
class Solution {
public:
    bool dfs(int src, int dest, vector<bool>& vis,
             vector<vector<int>>& adj) {

        if (src == dest) {
            return true;
        }

        vis[src] = true;

        for (int neighbour : adj[src]) {
            if (!vis[neighbour]) {
                if (dfs(neighbour, dest, vis, adj)) {
                    return true;
                }
            }
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int src,
                   int dest) {

        vector<vector<int>> adj(n);

        // Build an undirected graph
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> vis(n, false);

        return dfs(src, dest, vis, adj);
    }
};
