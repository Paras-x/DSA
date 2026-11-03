class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int start = n / 3;

        int count = 0;

        for (int i = start; i < n; i += 2) {
            count += piles[i];
        }

        return count;
    }
};