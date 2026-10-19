class Solution {
public:
    bool checkGoodInteger(int n) {
        vector<int> ans;
        int digitSum = 0;
        int squareSum = 0;

        while (n > 0) {
            int r = n % 10;
            digitSum += r;
            ans.push_back(r);
            n = n / 10;
        }

        for(int i = 0; i < ans.size(); i++){
            squareSum += ans[i]*ans[i];
        }

        if(squareSum - digitSum >= 50){
            return true;
        }else{
            return false;
        }
    }
};