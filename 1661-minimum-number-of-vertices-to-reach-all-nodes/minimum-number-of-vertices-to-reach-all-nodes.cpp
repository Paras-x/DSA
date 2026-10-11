class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {

        vector<int> indegree(n, 0);
        vector<int> ans;

        // Calculate indegree
        for (auto& edge : edges) {
            int v = edge[1];
            indegree[v]++;
        }

        // Find nodes whose indegree is 0
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};