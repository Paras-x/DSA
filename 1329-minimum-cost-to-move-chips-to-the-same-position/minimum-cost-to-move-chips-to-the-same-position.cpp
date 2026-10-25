class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int cost = 0;
        int cost2 = 0;

        for (int i = 0; i < position.size(); i++) {
            if (position[i] % 2) {
                cost++;
            } else {
                cost2++;
            }
        }

        return min(cost, cost2);
    }
};

