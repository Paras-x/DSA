class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int sumA = 0;
        int sumB = 0;

        for (int num : nums){
            sumA += num;

    
        while (num > 0) {
            int digit = num % 10;
            sumB += digit;
            num /= 10;
        }
}
        return abs(sumA - sumB);
    }
};