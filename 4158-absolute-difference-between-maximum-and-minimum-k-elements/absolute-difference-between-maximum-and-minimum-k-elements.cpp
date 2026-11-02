class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        // int n = nums.size();
        sort(nums.begin(), nums.end());

        int sum = 0;
       // int diff = 0;

        for (int i = nums.size() - k; i < nums.size(); i++) {
            sum += nums[i];
        }
        for (int i = 0; i < k; i++) {
            sum -= nums[i];
        }
        return abs(sum);
    }
};