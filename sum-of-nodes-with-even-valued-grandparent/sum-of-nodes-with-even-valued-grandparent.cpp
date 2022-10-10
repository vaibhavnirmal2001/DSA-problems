class Solution {
public:
    int s=0;
    int sumEvenGrandparent(TreeNode* root) {
        fun(root,NULL,NULL);  //passing the root node with it's parent & grandparent as NULL
        return s;
    }
    void fun(TreeNode* root,TreeNode* parent,TreeNode* grandparent)
    {
        if(!root) return;  //if root is null then return 
        if(grandparent && grandparent->val%2==0)  //checking even valued grandparent existance 
            s+=root->val;
        fun(root->left,root,parent);  //calling function for left subtree where root will be the parent & previous parent will act as the grandparent for left subtree of the root.
        fun(root->right,root,parent);  //same for right subtree
    }
};