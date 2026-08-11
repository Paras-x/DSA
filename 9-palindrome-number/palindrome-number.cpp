class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        return false;

        vector<int> nums;
        int p = x;

        while(p != 0) {
            int dia = p%10;
            nums.push_back(dia);
            p = p/10;
        }

        int i = 0;
        int j = nums.size() - 1;

        while( i < j ) {
            if(nums[i++] != nums[j--]) {
                return false;
            }
        }
        return true;
        
    }
};