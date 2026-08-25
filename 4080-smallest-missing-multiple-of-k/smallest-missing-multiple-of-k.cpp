class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        set<int> used;

        for (int num : nums) {
            if (num % k == 0) {
                used.insert(num);
            }
        }
        int  multiple = k;

            while (used.find(multiple) != used.end()) {
                multiple += k;
            }
        
        return multiple;
    }
    

};