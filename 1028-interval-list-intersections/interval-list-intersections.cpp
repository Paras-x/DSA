class Solution {
public:
    vector<vector<int>> intervalIntersection(
        vector<vector<int>>& firstList,
        vector<vector<int>>& secondList) {

        vector<vector<int>> ans;

        int i = 0;
        int j = 0;

        while (i < firstList.size() && j < secondList.size()) {

            int start = max(firstList[i][0], secondList[j][0]);
            int end = min(firstList[i][1], secondList[j][1]);

            // Overlap exists
            if (start <= end) {
                ans.push_back({start, end});
            }

            // Jiska end chhota hai, usko move karo
            if (firstList[i][1] < secondList[j][1]) {
                i++;
            }
            else {
                j++;
            }
        }

        return ans;
    }
};