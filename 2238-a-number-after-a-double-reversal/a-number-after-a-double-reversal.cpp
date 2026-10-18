class Solution {
public:
    bool isSameAfterReversals(int num) {
        int p = num;
        int v = 0;
        int count = 0;

        while (p > 0) {
            count++;
            p = p / 10;
        }

        p = num; // Original number restore karo

        while (p > 0) {
            int r = p % 10;
            v = v * 10 + r;
            p = p / 10;
        }

        int count2 = 0;

        while (v > 0) {
            count2++;
            v = v / 10;
        }

        if (count == count2) {
            return true;
        } else {
            return false;
        }
    }
};