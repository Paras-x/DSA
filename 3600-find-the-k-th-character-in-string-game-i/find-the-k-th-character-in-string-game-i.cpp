/* class Solution {
public:
    char kthCharacter(int k) {

        string word = "a";
        while (word.length() < k) {
            string temp = "";

            for (char ch : word) {
                temp += ch + 1;
            }
            word += temp;
        }

        return word[k - 1];
    }
}; */

class Solution {
public:
    void generate(string &word, int k) {
        if (word.length() >= k) {
            return;
        }

        string temp = "";
        for (char ch : word) {

            temp += ch + 1;
        }

        word += temp;

        generate(word, k);
    }
    char kthCharacter(int k) {
        string word = "a";

        generate(word, k);

        return word[k - 1];
    }

};