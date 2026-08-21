class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;
        if(x == 0 ) return 0.0;
        
        long long val = n;
        if(val < 0){
            x = 1/x;
            val = -val;
        }

        double ans = 1.0;
        while(val > 0){
            if(val & 1){
                ans *= x;
            }
            
            x *= x;
            val /= 2;
        }

        return ans;

    }
};