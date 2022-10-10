/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* clone, TreeNode* targ) {
        return original == nullptr ? nullptr :
    original == targ ? clone : 
      getTargetCopy(original->left, clone->left, targ) ?: getTargetCopy(original->right, clone->right, targ);
    }
};