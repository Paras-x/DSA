class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};

        // Count frequency
        for (char ch : s) {
            freq[ch]++;
        }

        int ans = 0;

        // Har character ka even part use kar sakte hain
        for (int i = 0; i < 128; i++) {
            ans += (freq[i] / 2) * 2;
        }

        // Agar koi odd frequency hai,
        // to ek character center mein rakh sakte hain
        if (ans < s.length()) {
            ans++;
        }

        return ans;
    }
};