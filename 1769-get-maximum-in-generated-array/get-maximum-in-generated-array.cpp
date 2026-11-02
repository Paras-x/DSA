class Solution {
public:
int solve(vector<int>& dp, int i, int n) {

    if(i == 0) return 0;
    if(i == 1) return 1;

    if(dp[i] != -1) return dp[i];

    if(i % 2 == 0) {
        return dp[i] = solve(dp, i / 2, n);
    }

    return dp[i] = solve(dp, i / 2, n) + solve(dp, i / 2 + 1, n);
}

int getMaximumGenerated(int n) {

    if(n == 0) return 0;

    vector<int> dp(n + 1, -1);

    int maxi = 0;

    for(int i = 0; i <= n; i++) {
        maxi = max(maxi, solve(dp, i, n));
    }

    return maxi;
}

};
