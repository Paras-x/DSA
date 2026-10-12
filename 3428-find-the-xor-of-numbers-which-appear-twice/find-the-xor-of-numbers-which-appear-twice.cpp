class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> freq;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        for (auto it : freq) {
            if (it.second == 2) {
                ans ^= it.first;
            }
        }

        return ans;
    }
};