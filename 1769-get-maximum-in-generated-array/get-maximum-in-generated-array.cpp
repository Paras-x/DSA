class Solution {
public:
    void solve(vector<int>& nums, int i, int n) {

        if (i > n) {
            return;
        }

        if (2 * i <= n) {
            nums[2 * i] = nums[i];
        }

        if (2 * i + 1 <= n) {
            nums[2 * i + 1] = nums[i] + nums[i + 1];
        }

        solve(nums, i + 1, n);
    }

    int getMaximumGenerated(int n) {

        if (n == 0) return 0;

        vector<int> nums(n + 1, 0);

        nums[0] = 0;
        nums[1] = 1;

        solve(nums, 1, n);

        return *max_element(nums.begin(), nums.end());
    }
};