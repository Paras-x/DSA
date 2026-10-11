class Solution {
public:
    void dfsHelper(int u, vector<vector<int>>& isConnected,
                   vector<bool>& vis) {
        // 1. Current node visited mark karo
        vis[u] = true;


        // 2. Sabhi nodes par loop chalao
        for (int i = 0; i < isConnected.size(); i++) { 
            if (!vis[i] && isConnected[u][i] == 1) { 
                dfsHelper(i,isConnected, vis); 
            } 
       }

       
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> vis(n, false);
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                // count increase karo
                count++;
                dfsHelper(i, isConnected, vis);

                // DFS call karo
            }
        }

        return count;
    }
};