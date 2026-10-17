class Solution {
public:
    int maxProduct(int n) {
        vector<int> p;

        while (n > 0) {
            int r = n % 10;
            p.push_back(r);
            n = n / 10;
        }

        sort(p.begin(), p.end());

        int l = p.size() -1;
        int m = p.size() -2;

       int k = p[l] * p[m];

        return k;
    }
};