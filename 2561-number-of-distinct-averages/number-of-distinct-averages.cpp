class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<double> ans;
        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            double avg = (nums[i] + nums[j]) / 2.0;
            ans.push_back(avg);

            i++;
            j--;
        }

        unordered_map<double, int> mp;

        for (int i = 0; i < ans.size(); i++) {
            mp[ans[i]]++;
        }

        return mp.size();
    }
};

