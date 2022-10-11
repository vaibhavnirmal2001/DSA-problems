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
     vector<int>res;
    int curFreq=0, maxFreq=INT_MIN, prevalue; 
    void inorder(TreeNode* root)
 {
     if(!root)
         return ;
    
         inorder(root->left);
        if(prevalue==root->val)
        {
            curFreq++;
        }
        else
        {
            curFreq=1;
        }
        if(curFreq>maxFreq)
        {
            res.clear();
            maxFreq=curFreq;
            res.push_back(root->val);
        }
        else if(curFreq==maxFreq)
        {
            res.push_back(root->val);
        }
        prevalue=root->val;
         inorder(root->right);
}
    vector<int> findMode(TreeNode* root) 
   {
        if(!root->left && !root->right)
        {
            return {root->val%10};
        }
        inorder(root);
        return res;
    }
};