/* class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        vector<vector<int>> dp(n + 1, vector<int>(2, 0));

        for(int i = n - 1; i >= 0; i--) {

            // Buy 
            dp[i][1] = max(
                -prices[i] + dp[i + 1][0],
                dp[i + 1][1]
            );

            // Sell 
            dp[i][0] = max(
                prices[i] + dp[i + 1][1],
                dp[i + 1][0]
            );
        }

        return dp[0][1];
    }
}; */

class Solution {
public:
    int solve(vector<int>& prices, int i, int buy,
              vector<vector<int>>& dp) {

        if(i == prices.size()) {
            return 0;
        }

        if(dp[i][buy] != -1) {
            return dp[i][buy];
        }

        int profit = 0;

        if(buy) {
            profit = max(
                -prices[i] + solve(prices, i + 1, 0, dp), // buy
                solve(prices, i + 1, 1, dp)               // skip
            );
        }
        else {
            profit = max(
                prices[i] + solve(prices, i + 1, 1, dp), // sell
                solve(prices, i + 1, 0, dp)              // skip
            );
        }

        return dp[i][buy] = profit;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        vector<vector<int>> dp(n, vector<int>(2, -1));

        return solve(prices, 0, 1, dp);
    }
};