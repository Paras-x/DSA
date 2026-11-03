class Solution {
public:
    int minMoves(vector<int>& nums) {

        int mx = *max_element(nums.begin(), nums.end());
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            int diff = mx - nums[i];
            ans += diff;
        }

        return ans;
    }
};