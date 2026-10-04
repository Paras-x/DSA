class Solution {
public:
    string toHex(int num) {

        string hex = "0123456789abcdef";
        string result = "";

        unsigned int n = num;

        if (n == 0)
            return "0";

        while (n > 0) {
            int r = n % 16;
            result = hex[r] + result;
            n = n / 16;
        }

        return result;
    }
};