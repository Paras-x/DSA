class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                for (int k = 0; k < nums.size(); k++) {

                    if (i < j && j < k && nums[i] != nums[j] &&
                        nums[i] != nums[k] && nums[j] != nums[k]) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};