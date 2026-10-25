class Solution {
public:
    int splitNum(int num) {

        string s = to_string(num);
        sort(s.begin(), s.end());

        int even = 0, odd = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i % 2 == 0)
                even = even * 10 + (s[i] - '0');
            else
                odd = odd * 10 + (s[i] - '0');
        }

        return even + odd;
    }
};