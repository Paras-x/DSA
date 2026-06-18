/* class Solution {
public:

    int solve(vector<int>& coins, int amount) {
        //base case
        if(amount == 0) {
            return 0;
        }
        int mini = INT_MAX;
        int ans = INT_MAX;
        for(int i = 0; i<coins.size(); i++) {
            int coin = coins[i];

            //current coin ko sir tabhi use karenge jabb uski value <= amount hogi
            if(coin <= amount ) {
                int recAns = solve(coins, amount - coin);
                if(recAns != INT_MAX)
                ans = 1 + recAns;
            }
            mini = min(mini, ans);
        }
        return mini;
    }
    int coinChange(vector<int>& coins, int amount) {
        
        int ans = solve(coins, amount);

        if(ans == INT_MAX) {
            return -1;
        }else {
            return ans;
        }
    
    };
}; */

class Solution {
public:

    int solve(vector<int>& coins, int amount, vector<int>& dp) {
        if(amount == 0)
            return 0;

        if(dp[amount] != -1)
            return dp[amount];

        int mini = INT_MAX;

        for(int coin : coins) {
            if(coin <= amount) {
                int recAns = solve(coins, amount - coin, dp);

                if(recAns != INT_MAX)
                    mini = min(mini, 1 + recAns);
            }
        }

        return dp[amount] = mini;
    }

    int coinChange(vector<int>& coins, int amount) {

        vector<int> dp(amount + 1, -1);

        int ans = solve(coins, amount, dp);

         if(ans == INT_MAX) {
            return -1;
        }else {
            return ans;
        }
    }
};