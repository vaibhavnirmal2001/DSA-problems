class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL) return NULL;
        
        return countNodes(root->left)+countNodes(root->right)+1;
        
    }
};
