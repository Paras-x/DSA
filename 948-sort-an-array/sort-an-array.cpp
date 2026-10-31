class Solution {
public:
    void marge(vector<int>& nums, int l, int m, int r) {
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;

        // Create temp arrays
        int L[n1], R[n2];

        // Copy data to temp arrays
        for (i = 0; i < n1; i++)
            L[i] = nums[l + i];
        for (j = 0; j < n2; j++)
            R[j] = nums[m + 1 + j];

        // Merge the temp numsays back into nums[l..r]
        i = 0; // Initial index of first sub-numsay
        j = 0; // Initial index of second sub-numsay
        k = l; // Initial index of merged sub-numsay
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                nums[k] = L[i];
                i++;
            } else {
                nums[k] = R[j];
                j++;
            }
            k++;
        }

        // Copy the remaining elements of L[], if there are any
        while (i < n1) {
            nums[k] = L[i];
            i++;
            k++;
        }

        // Copy the remaining elements of R[], if there are any
        while (j < n2) {
            nums[k] = R[j];
            j++;
            k++;
        }
    };
    void mergesort(vector<int>& nums, int l, int r) {
        if (l < r) {
            int m = l + (r - l) / 2;
            mergesort(nums, l, m);
            mergesort(nums, m + 1, r);

            marge(nums,l, m, r);
        }
    };
    vector<int> sortArray(vector<int>& nums) {

        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};