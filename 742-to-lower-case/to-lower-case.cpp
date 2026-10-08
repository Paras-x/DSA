class Solution {
public:
    string toLowerCase(string s) {
        string d ="";
        for (char c : s) {
           d += tolower(c);
        }
        return d;
    }
};