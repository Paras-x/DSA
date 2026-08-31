class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int count = 0;

        // ending spaces skip
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // last word count
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};