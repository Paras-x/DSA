 class Solution {
public: 
    /* int solve(vector<int>& coins, int amount, int index) {

        // Base Cases
        if(amount == 0)
            return 1;

        if(index >= coins.size())
            return 0;

        int include = 0;
        if(coins[index] <= amount)
            include = solve(coins, amount - coins[index], index);

        int exclude = solve(coins, amount, index + 1);

        return include + exclude;
    }

    int change(int amount, vector<int>& coins) {
        return solve(coins, amount, 0);
    }
}; */


//top down

    int solve(vector<int>& coins, int amount, int index,
              vector<vector<int>>& dp) {

        if(amount == 0)
            return 1;

        if(index >= coins.size())
            return 0;

        if(dp[index][amount] != -1)
            return dp[index][amount];

        int include = 0;

        if(coins[index] <= amount)
            include = solve(coins, amount - coins[index],
                            index, dp);

        int exclude = solve(coins, amount,
                            index + 1, dp);

        return dp[index][amount] = include + exclude;
    }

    int change(int amount, vector<int>& coins) {

        int n = coins.size();

        vector<vector<int>> dp(n,
                               vector<int>(amount + 1, -1));

        return solve(coins, amount, 0, dp);
    }
};
 


//bottom down
   /*  int change(int amount, vector<int>& coins) {

        int n = coins.size();

        vector<vector<int>> dp(n + 1,
                               vector<int>(amount + 1, 0));

        for(int i = 0; i <= n; i++)
            dp[i][0] = 1;

        for(int index = n - 1; index >= 0; index--) {

            for(int amt = 0; amt <= amount; amt++) {

                int include = 0;

                if(coins[index] <= amt)
                    include = dp[index][amt - coins[index]];

                int exclude = dp[index + 1][amt];

                dp[index][amt] = include + exclude;
            }
        }

        return dp[0][amount];
    }
}; 
 */
