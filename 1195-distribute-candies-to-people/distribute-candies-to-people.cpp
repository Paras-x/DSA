class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {

        vector<int> arr(num_people, 0);
        int give = 1;

        int i = 0;

        while (candies > 0) {
            int x = min(candies, give);

            arr[i] += x;
            candies -= x;
            give++;
            i = (i + 1) %num_people;
        }
        return arr;
    }
};