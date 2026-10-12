class Solution {
public:
    bool checkPowersOfThree(int n) {
        int num = 1;
        vector<int> v;

        while (num <= n) {
            v.push_back(num);
            num *= 3;
        }

        for (int i = v.size() - 1; i >= 0; i--) {
            if (v[i] <= n) {
                n -= v[i];
            }
        }

        return n == 0;
    }
};
