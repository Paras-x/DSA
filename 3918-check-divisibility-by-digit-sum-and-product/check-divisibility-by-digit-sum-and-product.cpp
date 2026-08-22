class Solution {
public:
    bool checkDivisibility(int n) {
        int arr = n;
        int d = n;
        int sum = 0;
        int product = 1;

        while (arr > 0) {
            sum += arr % 10;
            arr /= 10;
        }

        while (d > 0) {
            product *= d % 10;
            d /= 10;
        }

        int totalSum = sum + product;

        if (n % totalSum == 0)
            return true;
        else
            return false;
    }
};