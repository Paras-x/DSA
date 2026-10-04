class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(), nums.end(), greater<int>());

        int count = 1;
        int i = 0;
        int j = 1;

        while (j < nums.size()) {

            if (nums[i] != nums[j]) {
                count++;
                i = j;

                if (count == 3)
                    return nums[i];
            }

            j++;
        }

        // Agar 3 distinct numbers nahi mile
        return nums[0];
    }
};