class Solution {
public:
    int alternatingSum(vector<int>& nums) {
       // string s = to_string(nums);

        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int digit = nums[i];

            if (i % 2 == 0) {
                sum += digit;
            } else {
                sum -= digit;
            }
        }

        return sum;
        
    }
};