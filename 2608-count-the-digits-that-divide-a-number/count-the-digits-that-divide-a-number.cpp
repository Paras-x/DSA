class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int n = num;
        while (0 < n) {

            int rem = n % 10;

            if (num % rem == 0) {
                count++;
            }
            n = n / 10;
        }
        return count;
    }
};