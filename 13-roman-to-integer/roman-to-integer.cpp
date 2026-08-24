class Solution {
public:
    int romanToInt(string s) {
        vector<int> value = {
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4, 1
        };

        vector<string> symbol = {
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV", "I"
        };

        int ans = 0;

        for (int i = 0; i < symbol.size(); i++) {

             while (s.find(symbol[i]) == 0) {

                ans += value[i];

                s.erase(0, symbol[i].size());
            }
        }

        return ans;
        
    }
};