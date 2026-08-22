/* class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int num : nums) {
            actualSum += num;
        }

        return expectedSum - actualSum;
    }
}; */



/* class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            ans ^= i ^ nums[i];
        }

        return ans;
    }
}; */

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        unordered_map<int , int> mp;
        

        for( int num : nums){
            mp[num]++;
        }

        for(int j = 0; j <= nums.size();  j++){
             if( mp.find(j) == mp.end()){
                return j;
            }
        }
        return -1;
    }
};











