class Solution {
public:

    void solve(vector<int>& digits, vector<int>& used,
               int pos, int num, set<int>& ans) {

        if (pos == 3) {
            ans.insert(num);
            return;
        }

        for (int i = 0; i < digits.size(); i++) {

            if (used[i])
                continue;

            // First digit cannot be 0
            if (pos == 0 && digits[i] == 0)
                continue;

            // Last digit must be even
            if (pos == 2 && digits[i] % 2 != 0)
                continue;

            used[i] = 1;

            solve(digits, used, pos + 1,
                  num * 10 + digits[i], ans);

            used[i] = 0;
        }
    }

    int totalNumbers(vector<int>& digits) {

        vector<int> used(digits.size(), 0);
        set<int> ans;

        solve(digits, used, 0, 0, ans);

        return ans.size();
    }
};