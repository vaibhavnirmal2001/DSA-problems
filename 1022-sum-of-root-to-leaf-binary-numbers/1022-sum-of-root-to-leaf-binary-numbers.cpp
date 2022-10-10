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
    int ans=0;
    int convert_decimal(vector<int> v)
    {
        int n=0;
        for(int i=0;i<v.size();i++)
            n=n*2+v[i];
        return n;
    }
    void findpath(TreeNode* root,vector<int> t)
    {
        if(!root)return;
        t.push_back(root->val);
        if(!root->left && !root->right)ans+=convert_decimal(t);
        findpath(root->left,t);
        findpath(root->right,t);
    }
    int sumRootToLeaf(TreeNode* root) {
        if(!root)return 0;
        vector<int> t;
        findpath(root,t);
        return ans;
    }
};