class Solution {
public:
    void dfs(int src, int dest, vector<vector<int>>& graph,
             vector<int>& path, vector<vector<int>>& ans) {

        path.push_back(src);

        if (src == dest) {
            ans.push_back(path);
        } else {
            for (int neighbour : graph[src]) {
                dfs(neighbour, dest, graph, path, ans);
            }
        }

        path.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;

        int dest = graph.size() - 1;

        dfs(0, dest, graph, path, ans);

        return ans;
    }
};

//int return → total paths ki count.
//vector<vector<int>> return → har path ki list.