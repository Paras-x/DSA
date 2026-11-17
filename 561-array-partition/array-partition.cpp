class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;

        for(int i = 0; i < nums.size(); i+=2) {
            int mn = nums[i];

            if (i + 1 < nums.size()) {
                mn = min(mn, nums[i + 1]);
            }
            sum += mn;
        }

        return sum;
    }
};