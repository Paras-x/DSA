class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int i = 0;

        int sum = 0;
        int minLength = INT_MAX;

        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];

            while (sum >= target) {
                int length = j - i + 1;

                minLength = min(minLength, length);
                sum -= nums[i];
                i++;
            }
        }

        return minLength == INT_MAX ? 0 : minLength;
    }
};