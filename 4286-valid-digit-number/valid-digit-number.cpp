class Solution {
public:
    bool validDigit(int num, int x) {
        int first = num;
        while (first >= 10) {
            first /= 10;
        }
        if (first == x) {
            return false;
        }
        while (num > 0) {
            if (num % 10 == x) {
                return true;
            }
            num /= 10;
        }
        return false;
    }
};