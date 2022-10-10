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
    
    pair <int,int> hd(TreeNode * root)
    {
     if(root == NULL)
     {
       pair <int,int> p;
       p.first = 0;
       p.second = 0;
       return p;
     }
       pair <int,int> left = hd(root->left);
       pair <int,int> right = hd(root->right);
      
       pair <int,int> ans;
      ans.first = 1 + max(left.first , right.first);
      ans.second = max( left.first + right.first,max(left.second,right.second));
      return ans;
      
      
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        pair <int,int> p;
      p = hd(root);
      return p.second;
    }
};