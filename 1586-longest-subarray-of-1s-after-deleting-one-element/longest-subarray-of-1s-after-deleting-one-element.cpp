class Solution {
public:
    int longestSubarray(vector<int>& nums) {

         int i = 0;
        int zero = 0;
        int maxOnes = 0;

        for (int j = 0; j < nums.size(); j++) {

            // Current element zero hai
            if (nums[j] == 0)
                zero++;

            // K se zyada zero ho gaye
            while (zero > 1) {

                if (nums[i] == 0)
                    zero--;

                i++;
            }

           int length = j - i + 1;

           //zero hata do

           int ones = length - zero;

          maxOnes = max(maxOnes, ones);
        }

        return min(maxOnes, (int)nums.size() - 1);
        
    }
};