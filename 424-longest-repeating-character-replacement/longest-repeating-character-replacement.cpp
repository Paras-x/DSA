class Solution {
public:
    int characterReplacement(string s, int k) {

        int i = 0;
        int maxFreq = 0;
        int ans = 0;

        vector<int> freq(26, 0);

        for (int j = 0; j < s.size(); j++) {

            freq[s[j] - 'A']++;

            maxFreq = max(maxFreq, freq[s[j] - 'A']);

            int windowLength = j - i + 1;

            while (windowLength - maxFreq > k) {

                freq[s[i] - 'A']--;
                i++;

                windowLength = j - i + 1;
            }

            ans = max(ans, windowLength);
        }

        return ans;
    }
};