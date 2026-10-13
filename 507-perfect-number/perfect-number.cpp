class Solution {
public:
    bool checkPerfectNumber(int num) {
        /* int count = 0;

        for (int i = 1; i < num; i++) {

            if (num % i == 0) {
                count += i;
            }
        }
        if (count == num) {
            return true;
        } else {
            return false;
        } */

        if (num <= 1) {
            return false;
        }
        int sum = 1;
        for (int i = 2; i <= num / i; i++) {
            if (num % i == 0) {
                sum += i;
                if (i != num / i) {
                    sum += num / i;
                }
            }
        }
        return sum == num;
    }
};