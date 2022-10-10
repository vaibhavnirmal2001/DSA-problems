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
    int kthSmallest(TreeNode* root, int k) {
      if(root == NULL)
          return -1;
      int count = 0;
      int kmin = INT_MAX;
      TreeNode * curr = root;
       TreeNode * pre;
      while(curr)
      {
        if(curr->left==NULL)
        {
          count++;
          if(k==count)
          {
            kmin= curr->val;
          }
          curr = curr->right;
        }
        else
        {
         pre = curr->left;
          while(pre->right != NULL && pre->right != curr)
          {
            pre = pre->right;
          }
          
          if(pre->right == NULL)
          {
            pre->right = curr;
            curr = curr->left;
          }
          else
          {
            pre->right = NULL;
            count++;
            if(k == count)
            {
              kmin= curr->val;
            }
            curr = curr->right;
          }
        }
      }
      
      return kmin;
    }
};