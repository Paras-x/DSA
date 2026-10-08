class Solution {
public:
    string removeDuplicates(string s) {
        string ans = s;

        int i = 0;

        while (i + 1 < ans.length()) {

            if (ans[i] == ans[i + 1]) {
                ans.erase(i, 2);

                if (i > 0) {
                    i--;
                }
            } else {
                i++;
            }
        }

        return ans;
    }
};