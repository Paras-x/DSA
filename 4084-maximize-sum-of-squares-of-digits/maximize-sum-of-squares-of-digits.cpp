class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        string ans = "";
        if (sum > num * 9)
            return "";
        if (sum == 0)
            return "";
        int p = 0;
        int digit = 0;

        for (int i = 0; i < num; i++) {
            if (sum >= 9) {
                digit = 9;
                sum -= 9;
                ans += to_string(digit);

            } else if (sum < 9 && sum > 0) {
                digit = sum;
                sum = 0;
                ans += to_string(digit);
            } else if (sum == 0) {
                digit = 0;
                ans += to_string(digit);
            }
        }
        return ans;
    }
};