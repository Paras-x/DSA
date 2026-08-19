/* class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;

        for (int x : nums) {
            ans.push_back(x);
        }

        for (int x : nums) {
            ans.push_back(x);
        }
        return ans;
    }
}; */

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
         vector<int> ans(2*n);

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[n + i] = nums[i];
        }

        return ans;
    }
};