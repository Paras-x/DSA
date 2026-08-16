/* class Solution {
public:
    int numSquares(int n) {

        // Answer 1?
        int x = sqrt(n);
        if (x * x == n)
            return 1;

        // Legendre's theorem:
        // Remove all factors of 4
        while (n % 4 == 0)
            n /= 4;

        // If n = 7 (mod 8), answer is 4
        if (n % 8 == 7)
            return 4;

        // Otherwise answer is 2 or 3
        for (int i = 1; i * i <= n; i++) {

            int rem = n - i * i;

            int x = sqrt(rem);

            if (x * x == rem)
                return 2;
        }

        return 3;
    }
}; */

class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, n + 1);

        dp[0] = 0;

        for (int i = 1; i <= n; i++) {

            for (int j = 1; j * j <= i; j++) {

                int square = j * j;

                dp[i] = min(dp[i],
                             dp[i - square] + 1);
            }
        }

        return dp[n];
    }
};