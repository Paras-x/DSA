class Solution {
public:
    int fibo(int n, vector<int>& dp) {
        if (n <= 2)
            return n;
        if (dp[n] != -1)
            return dp[n];

        return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        int ans = fibo(n, dp);
        return ans;
    }
};