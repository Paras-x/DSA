class Solution {
public:
    bool checkString(string s) {
        int i = 0;
        int n = s.size();

        if (s[0] == 'b') {
            for (int i = 1; i < n; i++) {
                if (s[i] == 'a') {
                    return false;
                }
            }
            return true;
        }

        while (i < n && s[i] == 'a') {
            i++;
        }

        for (; i < n; i++) {
            if (s[i] == 'a') {
                return false;
            }
        }

        return true;
        
    }
};