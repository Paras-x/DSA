class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];

            while (n > 0) {
                int r = n % 10;
                ans.push_back(r);
                n /= 10;
            }
        }
        int count = 0;

        for(int j = 0; j < ans.size(); j++){
            if(digit == ans[j]){
                count++;
            }
        }
        return count;
    }
};