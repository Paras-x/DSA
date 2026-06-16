/* class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;

        for (int start = 0; start < nums.size(); start++) {
            for (int end = start; end < nums.size(); end++) {
                int currsum = 0;
                for (int i = start; i <= end; i++) {
                    currsum += nums[i];
                }
                maxSum = max(maxSum, currsum);
            }
        }
         return maxSum;
    }
}; */


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n);

        dp[0] = nums[0];
        int ans = dp[0];

        for(int i = 1; i < n; i++) {
            dp[i] = max(nums[i], nums[i] + dp[i-1]);
            ans = max(ans, dp[i]);
        }

        return ans;
    }
};






