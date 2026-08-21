/* class Solution {
public:
    int minimumOneBitOperations(int n) {
        int ans = 0;
        while( n > 0){
            ans ^= n;
            n >>= 1;
        }

        return ans;
    }
}; */

class Solution {
public:

    int solve(int n) {

        if (n == 0)
            return 0;

        int k = 0;

        while ((1 << k) <= n) {
            k++;
        }

        k--;

        int highest = (1 << k);

        return (2 * highest - 1) - solve(n - highest);
    }

    int minimumOneBitOperations(int n) {
        return solve(n);
    }
};