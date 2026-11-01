class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int i = 0;

        while (i < nums.size()) {
            int j = 0;
            int count = 0;

            while (j < nums.size()) {
                if (nums[j] < nums[i]) {
                    count++;
                }
                j++;
            }

            ans.push_back(count);
            i++;
        }

        return ans;
    }
};