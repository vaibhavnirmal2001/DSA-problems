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
    
    int maxAncestorDiff(TreeNode* r, int mn = 100000, int mx = 0) {
        return r ? max(maxAncestorDiff(r->left, min(mn, r->val), max(mx, r->val)),
        maxAncestorDiff(r->right, min(mn, r->val), max(mx, r->val))) : mx - mn;
    }
};