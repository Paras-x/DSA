/*  class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target) return {i, j};
            }
        }
         return {};
    }

};  */

/* class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            if (mp.count(need)) {
                return {mp[need], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
}; */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int, int>> arr;

        for(int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int i = 0;
        int j = arr.size() - 1;

        while(i < j) {

            int sum = arr[i].first + arr[j].first;

            if(sum == target) {
                return {arr[i].second, arr[j].second};
            }
            else if(sum < target) {
                i++;
            }
            else {
                j--;
            }
        }

        return {};
    }
};