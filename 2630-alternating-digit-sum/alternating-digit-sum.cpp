class Solution {
public:
    int alternateDigitSum(int n) {
        stack<int> st;

        while (n > 0) {
            st.push(n % 10);
            n /= 10;
        }

        int sum = 0;
        int pos = 1;

        while (!st.empty()) {
            int digit = st.top();
            st.pop();

            if (pos % 2 == 1)
                sum += digit;
            else
                sum -= digit;

            pos++;
        }

        return sum;
    }
};