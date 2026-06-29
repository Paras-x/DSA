class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        // Step 1: Build graph
        vector<vector<int>> adj(numCourses);

        for (auto &p : prerequisites) {
            int a = p[0];
            int b = p[1];
            adj[b].push_back(a);
        }

        // Step 2: Calculate indegree
        vector<int> indegree(numCourses, 0);

        for (int i = 0; i < numCourses; i++) {
            for (int nbr : adj[i]) {
                indegree[nbr]++;
            }
        }

        // Step 3: Push all nodes with indegree 0
        queue<int> q;

        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0)
                q.push(i);
        }

        // Step 4: BFS
        int count = 0;

        while (!q.empty()) {

            int node = q.front();
            q.pop();

            count++;

            for (int nbr : adj[node]) {
                indegree[nbr]--;

                if (indegree[nbr] == 0)
                    q.push(nbr);
            }
        }

        // Step 5: Check if all courses were visited
        return count == numCourses;
    }
};