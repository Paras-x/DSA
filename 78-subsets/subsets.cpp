class Solution {
public:
    void solve(vector<vector<int>>& ans,
           vector<int> output,
           vector<int> nums,
           int idx) {

        if (idx >= nums.size()) {
            ans.push_back(output);
            return;
        } // exclude
         solve(ans, output, nums, idx + 1);

        //include
        int element = nums[idx];
        output.push_back(element);
        solve(ans, output, nums, idx + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int idx = 0;
         solve(ans, output, nums, idx);
        return ans;
    }
};