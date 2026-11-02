class Solution {
public:
    int solve(vector<int>& nums, int s, int e, vector<int>& dp) {
        //basdecase
        if(s > e) {
            return 0;
        }
        //galti
        if(dp[s] != -1) return dp[s];
        // chori karo -> ith index per
        int option1 = nums[s] + solve(nums, s+2 ,e,dp);

        //chori mat karo -> ith index per
        int option2 = 0 + solve(nums, s+1, e, dp);

        dp[s] = max(option1, option2);
        return dp[s];
    }
    int rob(vector<int>& nums) {

        int n = nums.size();

        if( n == 1) {
            return nums[0];
        }
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);
        int option1 = solve(nums,0, n-2, dp1);
        int option2 = solve(nums, 1, n-1, dp2);
        int ans = max( option1, option2);
        return ans;
        
    }
};