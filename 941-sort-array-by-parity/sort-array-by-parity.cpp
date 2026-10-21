class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even, odd;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }
        //int i = 0;
        //int j = 0;

        for (int k = 0; k < even.size(); k++) {
            nums[k] = even[k];
        }
        for (int k = 0; k < odd.size(); k++) {
            nums[even.size() + k] = odd[k];
        }
        return nums;
    }
};