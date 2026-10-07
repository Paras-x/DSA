class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {

        int i = 0;
        int j = i + 1;

        while (j < nums.size()) {

            if (nums[i] != 0 && nums[i] == nums[j]) {

                nums[i] *= 2;
                nums[j] = 0;
                i++;
                j++;
            } else {
                i++;
                j++;
            }
        }

        i = 0;
        j = 1;
        while (j < nums.size()) {

            if (nums[i] == 0) {

                if (nums[j] != 0) {
                    swap(nums[i], nums[j]);
                    i++;
                }
                j++;
            } else {
                i++;
                j++;
            }
        }

        return nums;
    }
};