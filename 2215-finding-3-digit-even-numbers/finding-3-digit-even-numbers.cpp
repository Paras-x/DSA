class Solution {
public:
    void solve(vector<int>& digits, vector<int>& used, int pos, int num,
               vector<int>& ans) {

        if (pos == 3) {
            ans.push_back(num);
            return;
        }

        for (int i = 0; i < digits.size(); i++) {

            if (i > 0 && digits[i] == digits[i - 1] && !used[i - 1])
                continue;

            if (used[i])
                continue;

            if (pos == 0 && digits[i] == 0)
                continue;

            if (pos == 2 && digits[i] % 2 != 0)
                continue;

            used[i] = 1;

            solve(digits, used, pos + 1, num * 10 + digits[i], ans);

            used[i] = 0;
        }
    }

    vector<int> findEvenNumbers(vector<int>& digits) {

        sort(digits.begin(), digits.end());

        vector<int> used(digits.size(), 0);
        vector<int> ans;

        solve(digits, used, 0, 0, ans);

        return ans;
    }
};