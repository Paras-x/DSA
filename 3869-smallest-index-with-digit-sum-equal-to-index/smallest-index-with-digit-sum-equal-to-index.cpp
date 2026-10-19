class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        vector<int> ans;
         

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
           int sum = 0;

            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }

            ans.push_back(sum);
        }

        for(int j = 0; j < ans.size(); j++){
            if(ans[j] == j){
                return j;
            }
        }
        return -1;
    }
};