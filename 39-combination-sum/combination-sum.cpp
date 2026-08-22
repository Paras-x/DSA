class Solution {
public:
    vector<vector<int>> ans;
    int path[40]; // current combination
    int len = 0;

    void solve(vector<int>& candidates, int target, int index) {

        if (target == 0) {
            vector<int> temp;
            for (int i = 0; i < len; i++)
                temp.push_back(path[i]);

            ans.push_back(temp);
            return;
        }

        if (index == candidates.size() || target < 0)
            return;

        // Take current element
        path[len++] = candidates[index];
        solve(candidates, target - candidates[index], index);
        len--;

        // Skip current element
        solve(candidates, target, index + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates, target, 0);
        return ans;
    }
};