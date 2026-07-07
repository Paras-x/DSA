/* class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int, vector<int>, greater<int>> pq;

        // first k elements
        for(int i = 0; i < k; i++) {
            pq.push(nums[i]);
        }

        // remaining elements
        for(int i = k; i < nums.size(); i++) {

            if(nums[i] > pq.top()) {
                pq.pop();
                pq.push(nums[i]);
            }
        }

        return pq.top();
    }
}; */

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};

















