class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int f = nums[0];
        int l = nums[nums.size() - 1];
        vector<int> ans;
        for (int i = f; i <= l; i++) {
            ans.push_back(i);
        }
        for (int i = 0; i < nums.size(); i++) {
            auto it = find(ans.begin(), ans.end(), nums[i]);
            if (it != ans.end()) {
                ans.erase(it);
            }
        }
        return ans;
    }

}
;