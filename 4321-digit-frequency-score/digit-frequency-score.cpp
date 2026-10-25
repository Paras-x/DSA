class Solution {
public:
    int digitFrequencyScore(int num) {

       // int num = 122321;
        int freq[10] = {0};

        while (num > 0) {
            int digit = num % 10;
            freq[digit]++;
            num /= 10;
        }

        int sum = 0;

        for (int i = 0; i <= 9; i++) {
            sum += i * freq[i];
        }

        return sum;
    }
};