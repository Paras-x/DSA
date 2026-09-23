class Solution {
public:

    TreeNode* createNode(int val) {
        TreeNode* newNode = new TreeNode(val);

        newNode->left = NULL;
        newNode->right = NULL;

        return newNode;
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {

        if(root == NULL){
            return createNode(val);
        }

        if(val < root-> val){
            root->left = insertIntoBST(root->left, val);
        }else{
            root->right = insertIntoBST(root->right, val);
        }
        return root;
    }
};