class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {

        int sum = 0;
        int n = x;

        while (n > 0) {
            int r = n % 10;
            sum += r;
            n = n / 10;
        }

        if (x % sum == 0) {
            return sum;
        } else {
            return -1;
        }
    }
};