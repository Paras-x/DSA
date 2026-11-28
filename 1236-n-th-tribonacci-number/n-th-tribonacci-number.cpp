class Solution {
public:
    int nth(int n, vector<int>& dp) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;

        if (dp[n] != -1) {
            return dp[n];
        }

        dp[n] = nth(n - 1, dp) 
              + nth(n - 2, dp) 
              + nth(n - 3, dp);

        return dp[n];
    }

    int tribonacci(int n) {
        vector<int> dp(n + 1, -1);

        return nth(n, dp);
    }
};