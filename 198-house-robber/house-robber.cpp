class Solution {
public:
int solve(vector<int>& nums, int n, int index, vector<int>& dp) {
// Base case
if(index >= n) {
return 0;
}

    if(dp[index] != -1) {
        return dp[index];
    }

    // Chori karo
    int option1 = nums[index] + solve(nums, n, index+2, dp);

    // Chori mat karo
    int option2 = solve(nums, n, index+1, dp);

    dp[index] = max(option1, option2);
    return dp[index];
}

int rob(vector<int>& nums) {
    int n = nums.size();
    int index = 0;
    vector<int> dp(n, -1);

    int ans = solve(nums, n, index, dp);
    return ans;
}

};
