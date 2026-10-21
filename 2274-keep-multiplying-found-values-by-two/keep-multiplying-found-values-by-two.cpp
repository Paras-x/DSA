class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int found = 1;

        while (found) {
            found = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (original == nums[i]) {
                    original = 2 * original;
                    found = 1;
                    break;
                }
            }
        }

        return original;
    }
};
