class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& nums) {
        vector<int> ans;
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto it : mp) {
            if (it.second % 2 != 0) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};