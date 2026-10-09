class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        int carry = 0;
        vector<int> result;

        int i = num.size() - 1;

        while (i >= 0 || k > 0 || carry > 0) {

            int num1 = k % 10;
            k = k / 10;

            int a = (i >= 0) ? num[i] : 0;

            int sum = a + num1 + carry;

            result.push_back(sum % 10);
            carry = sum / 10;
            i--;
        }
        reverse(result.begin(), result.end());

        return result;
    }
};