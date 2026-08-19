class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // mid ko even index banao
            if (mid % 2 == 1)
                mid--;

            if (nums[mid] == nums[mid + 1]) {
                // Pair complete hai
                // Single right side me hai
                low = mid + 2;
            } else {
                // Pair broken hai
                // Single left side me hai (including mid)
                high = mid;
            }
        }

        return nums[low];
    }
};