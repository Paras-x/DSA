class Solution {
public:
    int reverse(int x) {
        int r;
        long long div = 0;

        while (x > 0 || x < 0) {
            r = x % 10;
            div = div * 10 + r;
            x = x / 10;
        }
        if (div > INT_MAX || div < INT_MIN)
            return 0;
        return div;
    }
};