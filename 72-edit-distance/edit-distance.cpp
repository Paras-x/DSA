/* class Solution {
public:

int solve(string a, string& b, int i, int j) {
    //base case
    if(i >= a.length()) {
        return b.length() -j;
    }
     if(i >= b.length()) {
        return a.length() -i;
    }
    int ans = 0;

    if(a[i] == b[j]) {

        ans = 0 + solve(a, b, i+1, j+1);
    }
    else {
        int option1 = 1 + solve(a, b, i, j + 1);
        int option2 = 1 + solve(a, b, i +1, j);
        int option3 = 1 + solve(a,b, i+1, j+1);
        ans = min(option1, min(option2, option3));
    }
    return ans;


}
    int minDistance(string word1, string word2) {
        int i = 0;
        int j = 0;
        int ans = solve(word1, word2, i, j);
        return ans;
        
    }
}; */

class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for(int i = 0; i <= n; i++) {
            dp[i][0] = i;
        }

        for(int j = 0; j <= m; j++) {
            dp[0][j] = j;
        }

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(word1[i - 1] == word2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = 1 + min({
                        dp[i - 1][j],     // delete
                        dp[i][j - 1],     // insert
                        dp[i - 1][j - 1]  // replace
                    });
                }
            }
        }

        return dp[n][m];
    }
};