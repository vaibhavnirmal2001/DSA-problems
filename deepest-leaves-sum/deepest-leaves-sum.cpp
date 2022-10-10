/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   int max_depth;
    int deepestLeavesSum(TreeNode* root) {
        max_depth = depthHelper(root);
        return sumHelper(root, 0);
    }
    
    int sumHelper (TreeNode* root, int depth) {
        if(!root) return 0;
        if(depth==max_depth-1) return root->val;
        return sumHelper(root->left, depth+1) +
            sumHelper(root->right, depth+1);
    
    }
    int depthHelper(TreeNode* root) {
        if(!root) return 0;
        return max(1+ depthHelper(root->left), 1+ depthHelper(root->right));
    }
};