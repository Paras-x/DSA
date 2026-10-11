class Solution {
public:
    int arrangeCoins(int n) {

        int k = 0;

        while(n >= k +1){
            n = n - (k + 1);
            k++;
        }

        return k;
    }
};