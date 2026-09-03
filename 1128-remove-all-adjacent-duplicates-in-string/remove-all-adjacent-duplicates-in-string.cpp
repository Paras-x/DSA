/* class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";

        for (char c : s) {
            if (!result.empty() && result.back() == c) {
                result.pop_back(); // remove duplicate
            } else {
                result.push_back(c); // add character
            }
        }

        return result;
    }
}; */

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st1;

        for (char c : s) {
            if (st1.empty()) {
                st1.push(c);

            } else if (st1.top() == c) {
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