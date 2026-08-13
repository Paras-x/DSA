class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
       /*  int n = s.length();

        vector<int> hash(256, -1);

        int r = 0;
        int l = 0;
        int maxLen = 0;

        while( r < n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= l){
                    l = hash[s[r]] + 1;
                }
            }
            int len = r - l + 1;

            maxLen = max( maxLen, len);
            hash[s[r]] = r;

            r++;
        }
        
        return maxLen;
    } */

   unordered_map<char, int> mp;

        int i = 0;
        int maxLen = 0;

        for (int j = 0; j < s.length(); j++) {

            if (mp.find(s[j]) != mp.end()) {
                i = max(i, mp[s[j]] + 1);
            }

            mp[s[j]] = j;

            maxLen = max(maxLen, j - i + 1);
        }

        return maxLen;
    }
};