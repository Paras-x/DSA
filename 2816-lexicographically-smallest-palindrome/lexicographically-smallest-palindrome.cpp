class Solution {
public:
    string makeSmallestPalindrome(string s) {

        string p = s;

        int i = 0;
        int j = p.length() - 1;

        while (i < j) {
            if (p[i] != p[j]) {
                char ch = min(p[i], p[j]);
                p[i] = ch;
                p[j] = ch;
            }

            i++;
            j--;
        }

        return p;
    }
};