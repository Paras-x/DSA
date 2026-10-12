class Solution {
public:
    int numberOfSteps(int n) {

        int count = 0;

        while (0 < n) {
            if (n % 2 == 0) {
                n =  n/2;
            } else {
                n = n - 1;
            }
            count++;
        }

        return count;
    }
};