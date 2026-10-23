class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {

        vector<int> x;

        for (int i = 0; i < points.size(); i++) {
            x.push_back(points[i][0]);
        }

        sort(x.begin(), x.end());

        int maxi = 0;

        for (int i = 0; i < x.size() - 1; i++) {
            int diff = x[i + 1] - x[i];
            maxi = max(maxi, diff);
        }

        return maxi;
    }
};