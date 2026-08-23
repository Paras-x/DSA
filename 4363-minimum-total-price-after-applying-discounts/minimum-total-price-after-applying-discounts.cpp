class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {

        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());

        int j = discounts.size() - 1;

        double sum = 0;
        for(int i = prices.size() - 1; i >= 0; i--){
            double dis = 0;

            if(j > -1 ){
                dis = prices[i]*discounts[j]/100.0;
                j--;
            }

            sum += prices[i] - dis;
        }
        return sum;
    }
};