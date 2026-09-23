class Solution {
public:

    void inorder(TreeNode* root, vector<int>& a) {
        if (root == NULL)
            return;

        // Left
        inorder(root->left, a);

        // Root
        a.push_back(root->val);

        // Right
        inorder(root->right, a);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {

        vector<int> a, b;

        inorder(root1, a);
        inorder(root2, b);

        // Merge two sorted arrays
        vector<int> ans;

        int i = 0;
        int j = 0;

        while (i < a.size() && j < b.size()) {

            if (a[i] <= b[j]) {
                ans.push_back(a[i]);
                i++;
            }
            else {
                ans.push_back(b[j]);
                j++;
            }
        }

        // Remaining elements of a
        while (i < a.size()) {
            ans.push_back(a[i]);
            i++;
        }

        // Remaining elements of b
        while (j < b.size()) {
            ans.push_back(b[j]);
            j++;
        }

        return ans;
    }
};