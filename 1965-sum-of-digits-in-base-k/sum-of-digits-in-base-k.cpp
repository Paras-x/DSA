class Solution {
public:
    int sumBase(int n, int k) {
        int ans = 0;
        int place = 1;

        while (n > 0) {
            int rem = n % k;
            ans += rem * place;
            place *= 10;
            n /= k;
        }

        int sum = 0;

        while (ans > 0) {
            int rem = ans % 10;
            sum += rem;
            ans /= 10;
        }

        return sum;
    }
};