class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        //vector<int> ans;
        int count = 0;
        int n = nums.size();

        for(int i = 1; i <= n; i++){
            if(n%i == 0){
               // ans.push_back(nums[i - 1]);
              count += nums[i - 1] * nums[i - 1];
            }
        }
/* 
        for(int j = 0; j < ans.size(); j++){
            count += ans[j] * ans[j];
        } */
        return count;
    }
};