/* class Solution {
public:
    int solve(vector<int>& nums, int s, int e) {
        //basdecase
        if(s > e) {
            return 0;
        }
        // chori karo -> ith index per
        int option1 = nums[s] + solve(nums, s+2 ,e);

        //chori mat karo -> ith index per
        int option2 = 0 + solve(nums, s+1, e);
//yah galti ki hai
        int finalAns = max(option1, option2);
        return finalAns;
    }
    int rob(vector<int>& nums) {

        int n = nums.size();

        if( n == 1) {
            return nums[0];
        }
        int option1 = solve(nums,0, n-2);
        int option2 = solve(nums, 1, n-1);
        int ans = max( option1, option2);
        return ans;
        
    }
}; */

class Solution {
public:
    int solve(vector<int>& nums, int s, int e, vector<int>& dp) {
        if (s > e) return 0;

        if (dp[s] != -1) return dp[s];

        int take = nums[s] + solve(nums, s + 2, e, dp);
        int skip = solve(nums, s + 1, e, dp);

        return dp[s] = max(take, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return nums[0];

        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);

        int option1 = solve(nums, 0, n - 2, dp1);
        int option2 = solve(nums, 1, n - 1, dp2);

        return max(option1, option2);
    }
};