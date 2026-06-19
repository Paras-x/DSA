class Solution {
public:
    /* int partition(vector<int>& nums, int low, int high) {
     int pivot = nums[high]; // pivot
     int i = low - 1; // Index of smaller element

     for (int j = low; j < high; j++) {
         // If current element is smaller than or equal to pivot
         if (nums[j] <= pivot) {
             i++; // Increment index of smaller element
             swap(nums[i], nums[j]);
         }
     }
     swap(nums[i + 1], nums[high]);
     return i + 1;
 }

 void QuickSort(vector<int>& nums, int low, int high) {
     if (low < high) {
         // Partitioning index
         int p = partition(nums, low, high);

         // Recursively sort elements before and after partition
         QuickSort(nums, low, p - 1);
         QuickSort(nums, p + 1, high);
     }
 }
     vector<int> sortArray(vector<int>& nums) {
         QuickSort(nums, 0, nums.size()- 1);
         return nums;

     }
 }; */

    void Marge(vector<int>& nums, int l, int m, int r) {
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
    }

    void MergeSort(vector<int>& nums, int l, int r) {
        if (l < r) {
            // Find the middle point
            int m = l + (r - l) / 2;

            // Sort first and second halves
            MergeSort(nums, l, m);
            MergeSort(nums, m + 1, r);

            // Merge the sorted halves
            Marge(nums, l, m, r);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        MergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};