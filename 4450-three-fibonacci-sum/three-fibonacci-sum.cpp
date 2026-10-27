class Solution {
public:
    bool threeFibonacciSum(int n) {
        int prev2 = 0;
        int prev1 = 1;

        while (true) {
            int curr = prev1 + prev2;

            if (prev2 + prev1 + curr == n)
                return true;

            if (prev2 + prev1 + curr > n)
                return false;

            prev2 = prev1;
            prev1 = curr;
        }
    }
};