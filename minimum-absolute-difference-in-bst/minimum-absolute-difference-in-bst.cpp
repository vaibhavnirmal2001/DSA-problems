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
    int getMinimumDifference(TreeNode* root) {
      if(root == NULL)
          return -1;
      int mini = INT_MAX;
      int prev = INT_MIN;
      stack <TreeNode *> s;
      TreeNode * temp = root;
      
      while(temp || !s.empty())
      {
        if(temp)
        {
          s.push(temp);
          temp = temp->left;
        }
        else
        {
          temp = s.top();
          s.pop();
          if(prev != INT_MIN)
          mini = min(mini,abs(prev-temp->val));
          prev = temp->val;
          temp = temp->right;
        }
      }
      return mini;
    }
};