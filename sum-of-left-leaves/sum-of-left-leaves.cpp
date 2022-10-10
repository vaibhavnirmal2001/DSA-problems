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
    //20
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root);
        return sum;
    }
    void dfs(TreeNode* root){
        if(root == nullptr)return;
        dfs(root->left);
        dfs(root->right);
        if(root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr)         {
            sum += root->left->val;
        }
    }
};