class Solution {
public:

    void kthS(TreeNode* root, int k, int& count, int& ans) {
        if (root == NULL)
            return;

        // Left
        kthS(root->left, k, count, ans);

        // Current node
        count++;

        if (count == k) {
            ans = root->val;
            return;
        }

        // Right
        kthS(root->right, k, count, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int ans = -1;

        kthS(root, k, count, ans);

        return ans;
    }
};