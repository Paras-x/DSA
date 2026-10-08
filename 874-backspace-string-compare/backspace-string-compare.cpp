class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans = "";
        string ans1 = "";

        for (char c : s) {
            if (c == '#') {
                if (!ans.empty()) {
                    ans.pop_back();
                }
            } else {
                ans.push_back(c);
            }
        }

        for (char v : t) {
            if (v == '#') {
                if (!ans1.empty()) {
                    ans1.pop_back();
                }
            } else {
                ans1.push_back(v);
            }
        }

        if( ans == ans1){
            return true;
        }else{
            return false;
        }
    }
};