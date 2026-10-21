class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

         vector<int> even, odd;

        for (int i = 0; i < nums.size(); i++) {
           if (nums[i] % 2 == 0) {
                even.push_back(nums[i]);

            } else {
                odd.push_back(nums[i]);
            }
        }
        int i = 0;
        int j = 0;

        for (int k = 0; k < nums.size(); k++) {
            if (k % 2 == 0) {
                nums[k] = even[i++];
            } else {
                nums[k] = odd[j++];
            }
        }
        return nums;
        
    }
};