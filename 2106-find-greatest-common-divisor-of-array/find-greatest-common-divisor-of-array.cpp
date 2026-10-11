class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int a = nums[nums.size() - 1]; // Largest
        int b = nums[0];               // Smallest

        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }

        return a;
    }
};

