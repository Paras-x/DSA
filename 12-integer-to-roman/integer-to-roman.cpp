/* class Solution {
public:
    string intToRoman(int num) {

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

        string ans = "";

        for (int i = 0; i < value.size(); i++) {

            while (num >= value[i]) {
                ans += symbol[i];
                num -= value[i];
            }
        }

        return ans;
    }
}; */

class Solution {
public:
    string intToRoman(int num) {

        string ans = "";

        // Thousands
        int d = num / 1000;
        for (int i = 0; i < d; i++) {
            ans += "M";
        }
        num = num % 1000;


        // Hundreds
        d = num / 100;

        if (d <= 3) {
            for (int i = 0; i < d; i++)
                ans += "C";
        }
        else if (d == 4) {
            ans += "CD";
        }
        else if (d <= 8) {
            ans += "D";

            for (int i = 0; i < d - 5; i++)
                ans += "C";
        }
        else { // d == 9
            ans += "CM";
        }

        num = num % 100;


        // Tens
        d = num / 10;

        if (d <= 3) {
            for (int i = 0; i < d; i++)
                ans += "X";
        }
        else if (d == 4) {
            ans += "XL";
        }
        else if (d <= 8) {
            ans += "L";

            for (int i = 0; i < d - 5; i++)
                ans += "X";
        }
        else { // d == 9
            ans += "XC";
        }

        num = num % 10;


        // Ones
        d = num;

        if (d <= 3) {
            for (int i = 0; i < d; i++)
                ans += "I";
        }
        else if (d == 4) {
            ans += "IV";
        }
        else if (d <= 8) {
            ans += "V";

            for (int i = 0; i < d - 5; i++)
                ans += "I";
        }
        else { // d == 9
            ans += "IX";
        }

        return ans;
    }
};