/* class Solution {
public:
    int minLengthAfterRemovals(string s) {

        int a = 0;
        int b = 0;

        for(char c : s) {
            if(c == 'a') {
                a++;
            }
            else {
                b++;
            }
        }

        return abs(a - b);
    }
}; */

class Solution {
public:
    int minLengthAfterRemovals(string s) {

        stack<pair<char, int>> st;

        for(char c : s) {

            if(st.empty()) {
                st.push({c, 1});
            }
            else if(st.top().first == c) {
                st.top().second++;
            }
            else {
                // a aur b different hain -> ek pair remove
                st.top().second--;

                if(st.top().second == 0) {
                    st.pop();
                }
            }
        }

        int ans = 0;

        while(!st.empty()) {
            ans += st.top().second;
            st.pop();
        }

        return ans;
    }
};