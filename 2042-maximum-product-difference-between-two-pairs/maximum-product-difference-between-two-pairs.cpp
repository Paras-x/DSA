class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int low = 1;
        int high = 1;
        // Starting ke 2
        for (int i = 0; i < 2 && i < n; i++) {
            low *= nums[i];
        }

        // Last ke 2
        for (int i = max(0, n - 2); i < n; i++) {
            high *= nums[i];
        }

        return high - low;
    }
};