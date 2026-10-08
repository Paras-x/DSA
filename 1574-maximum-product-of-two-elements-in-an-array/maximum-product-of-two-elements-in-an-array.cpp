class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int l = nums[n - 1];
        int s = nums[n - 2];

        int product = l * s;

        return  (l - 1) * (s - 1);
    }
};