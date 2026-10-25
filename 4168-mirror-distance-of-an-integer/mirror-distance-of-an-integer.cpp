class Solution {
public:
    int mirrorDistance(int n) {
        int  p = n;
        int div = 0;
        while(n > 0){
            int r = n%10;
            div = div*10 + r;
            n = n/10;
        }
        
        return abs(p - div);
    }
};