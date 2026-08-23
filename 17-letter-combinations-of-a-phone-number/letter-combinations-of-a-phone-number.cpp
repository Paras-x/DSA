class Solution {
public:

    void solve(string digit, string output, int idx, vector<string>& ans, string mapping[]){

        //base case
        if(idx >= digit.length()){
            ans.push_back(output);
            return;
        }

        int number = digit[idx] - '0';
        string value = mapping[number];

        for(int i = 0; i < value.length(); i++){
            output.push_back(value[i]);
            solve(digit, output, idx + 1, ans, mapping);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {

        vector<string> ans;

        if(digits.size() == 0) return ans;

        string output = "";
        int idx = 0;

        string mapping[10] =  {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };


        solve(digits, output, idx, ans, mapping);
        return ans;
        
    }
};