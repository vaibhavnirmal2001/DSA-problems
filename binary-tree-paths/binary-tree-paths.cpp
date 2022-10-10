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
  void helper(TreeNode * root, vector<string> & v,string s)
  {
    if(root == NULL)
    {
      return ;
    }
    if(root->left ==NULL && root->right == NULL)
    {
      s += to_string(root->val);
      v.push_back(s);
      return ;
    }
    s += to_string(root->val);
    s += "->";
    helper(root->left,v,s);
    helper(root->right,v,s);
    return ;
    
  }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root == NULL)
          return {};
      vector <string> v;
      string s = "";
      helper(root,v,s);
      return v;
    }
};