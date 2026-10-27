class Solution {
public:
    int fabo(int n, vector<int>& dp) {
        if (n <= 1)
            return n;
        if (dp[n] != -1) {
            return dp[n];
        }
        return dp[n] = fabo(n - 1, dp) + fabo(n - 2, dp);
    }
    int fib(int n) {
        vector<int> dp(n + 1, -1);
        int ans = fabo(n, dp);
        return ans;
    }
};