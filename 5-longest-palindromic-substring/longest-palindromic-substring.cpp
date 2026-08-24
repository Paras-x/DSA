class Solution {
public:
    string longestPalindrome(string s) {

        // Step 1: Transform string
        string t = "#";

        for (char ch : s) {
            t += ch;
            t += '#';
        }

        int n = t.size();

        // p[i] = palindrome radius at i
        vector<int> p(n, 0);

        int center = 0;
        int right = 0;

        int maxLen = 0;
        int bestCenter = 0;

        // Step 2: Manacher
        for (int i = 0; i < n; i++) {

            int mirror = 2 * center - i;

            if (i < right) {
                p[i] = min(right - i, p[mirror]);
            }

            // Expand
            while (i + p[i] + 1 < n &&
                   i - p[i] - 1 >= 0 &&
                   t[i + p[i] + 1] == t[i - p[i] - 1]) {

                p[i]++;
            }

            // Update rightmost palindrome
            if (i + p[i] > right) {
                center = i;
                right = i + p[i];
            }

            // Maximum palindrome
            if (p[i] > maxLen) {
                maxLen = p[i];
                bestCenter = i;
            }
        }

        // Step 3: Convert back to original string
        int start = (bestCenter - maxLen) / 2;

        return s.substr(start, maxLen);
    }
};