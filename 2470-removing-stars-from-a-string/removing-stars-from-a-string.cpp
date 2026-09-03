class Solution {
public:
    string removeStars(string s) {
        stack<char> st1;
        

        for (char c : s) {
            if (c == '*') {
                if (!st1.empty())
                    st1.pop();
            } else {
                st1.push(c);
            }
        }

        string ans = "";

        while (!st1.empty()) {
            ans += st1.top();
            st1.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};