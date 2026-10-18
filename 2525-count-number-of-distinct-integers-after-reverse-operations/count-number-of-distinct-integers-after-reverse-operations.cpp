class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> copy = nums;

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int rev = 0;

            while (n > 0) {
                int r = n % 10;
                rev = rev * 10 + r;
                n = n / 10;
            }

            copy.push_back(rev);
        }
        for (int i = 0; i < copy.size(); i++) {
            mp[copy[i]]++;
        }
        return mp.size();
    }
};