class Solution {
public:
    int smallestValue(int n) {
        while (true) {
            int sum = 0;
            int num = n;

            for (int i = 2; i * i <= num; i++) {
                while (num % i == 0) {
                    sum += i;
                    num /= i;
                }
            }

            if (num > 1) {
                sum += num;
            }

            if (sum == n) {
                return n;
            }

            n = sum;
        }
    }
};
