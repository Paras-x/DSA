class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }

        int y = x;
        int r;
        long long div = 0;

        while (x > 0) {
            r = x % 10;
            div = div * 10 + r;
            x = x / 10;
        }

        if (y == div) {
            return true;
        } else {
            return false;
        }
    }
};