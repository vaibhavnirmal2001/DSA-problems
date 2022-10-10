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
    bool isValidBST(TreeNode* root) {
        
        if(root == NULL)
            return true;
        
        stack <TreeNode * > s;
        TreeNode * temp = NULL;
        while(root != NULL ||  !s.empty())
        {
            
            if(root != NULL)
            { 
                s.push(root);
                root = root->left;
            }
            else
            {
                root = s.top();
                s.pop();
                if(temp != NULL && temp->val >= root->val)
                    return false;
                temp = root;
                root = root->right;
            }
            
        }
        
        return true;
    }
};