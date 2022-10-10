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
    int minDiffInBST(TreeNode* root) {
        if(root == NULL)
            return INT_MAX;
        
        int mini = INT_MAX;
        stack <TreeNode * > s;
        TreeNode * temp = NULL;
        
        while(root != NULL || !s.empty() )
        {
            while(root != NULL)
            {
                s.push(root);
                root = root->left;
            }
            root = s.top();
            s.pop();
            if(temp != NULL && abs(temp->val - root->val) < mini )
                mini = abs(temp->val - root->val) ;
            temp = root;
            root = root->right;
        }
        return mini;
    }
};