class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> freq(nums.size() + 1, 0);

        for (int x : nums) {
            freq[x]++;
        }

        vector<int> ans;

        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] == 2) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};