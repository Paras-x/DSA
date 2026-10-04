/* class Solution {
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
}; */

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int num : nums) {

            if (num == first || num == second || num == third)
                continue;

            if (num > first) {
                third = second;
                second = first;
                first = num;
            }
            else if (num > second) {
                third = second;
                second = num;
            }
            else if (num > third) {
                third = num;
            }
        }

        if (third == LLONG_MIN)
            return first;

        return third;
    }
};