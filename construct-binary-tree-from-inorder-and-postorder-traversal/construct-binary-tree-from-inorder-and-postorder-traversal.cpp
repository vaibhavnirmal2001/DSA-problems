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
  TreeNode * helper(vector<int>& postorder, vector<int>& inorder,int poss,int pose,int ins,int ine)
    {
      if(poss > pose)return NULL;
      
      
      int rootdata = postorder[pose];
      int rootIndex = -1;
      for(int i=ins;i<=ine;i++)
      {
        if(inorder[i] == rootdata)
        {
          rootIndex = i;
          break;
        } 
      }
  
      int lins = ins;
      int line = rootIndex-1;
      int rins = rootIndex + 1;
      int rine = ine;
      int lposs = poss;
      int lpose = lposs + (line-lins);
      int rposs = lpose + 1;
      int rpose = pose-1;
      
      TreeNode * root = new TreeNode(rootdata);
      root->left = helper(postorder,inorder,lposs,lpose,lins,line);
      root->right = helper(postorder,inorder,rposs,rpose,rins,rine);
      
      return root;
      
    }
  
  
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    return helper(postorder,inorder,0,postorder.size()-1,0,inorder.size()-1);
    }
};