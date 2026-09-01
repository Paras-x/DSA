class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int evenCount = 0;
        for (int n : nums) {

            int count = 0;

            while (n > 0) {
                n = n / 10;
                count++;
            }
            if (count % 2 == 0) {
                evenCount++;
            }
            
        }
        return evenCount;
    }
};