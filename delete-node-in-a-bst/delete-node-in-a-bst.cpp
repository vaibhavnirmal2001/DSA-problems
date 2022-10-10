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
    TreeNode * findMini (TreeNode * root)
    {
      if(root == NULL)
        return NULL;
      TreeNode * temp = root;
      while(temp->left != NULL)
      {
        temp = temp->left;
      }
      return temp;
    
    }
  
    TreeNode* deleteNode(TreeNode* root, int key) {
      
      if(root == NULL)
        return root;
      if(root->val > key)
        root->left = deleteNode(root->left,key);
      if(root->val < key)
        root->right = deleteNode(root->right,key);
      if(root->val == key)
      {
        if(root->left == NULL && root->right == NULL)
        {
          delete root;
          return NULL;
        }
        if(root->left == NULL)
        {
          TreeNode * temp = root->right;
          root->right = NULL;
          delete root;
          return temp;
        }
        if(root->right == NULL)
        {
          TreeNode * temp = root->left;
          root->left = NULL;
          delete root;
          return temp;
        }
        
        TreeNode * temp = findMini(root->right);
        root->val = temp->val;
        root->right = deleteNode(root->right,temp->val);
         //delete temp;
        return root;
      }
      return root;
    }
};