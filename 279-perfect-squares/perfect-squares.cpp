class Solution {
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
};