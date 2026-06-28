class Solution {
public:
    vector<string> getNeighbors(string s) {
        vector<string> neighbors;

        for (int i = 0; i < 4; i++) {
            string up = s;
            string down = s;

            // Wheel ko +1 ghumao
            up[i] = (s[i] == '9') ? '0' : s[i] + 1;

            // Wheel ko -1 ghumao
            down[i] = (s[i] == '0') ? '9' : s[i] - 1;

            neighbors.push_back(up);
            neighbors.push_back(down);
        }

        return neighbors;
    }

    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead(deadends.begin(), deadends.end());

        if (dead.count("0000"))
            return -1;

        queue<pair<string, int>> q;
        unordered_set<string> visited;

        q.push({"0000", 0});
        visited.insert("0000");

        while (!q.empty()) {
            auto [curr, steps] = q.front();
            q.pop();

            if (curr == target)
                return steps;

            for (string next : getNeighbors(curr)) {
                if (!dead.count(next) && !visited.count(next)) {
                    visited.insert(next);
                    q.push({next, steps + 1});
                }
            }
        }

        return -1;
    }
};