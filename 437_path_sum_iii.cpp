class Solution {
public:
    int count;

    void dfs(TreeNode* root, long long sum,  long long  targetSum)
    {
        if(root==NULL)
            return;
        sum+=root->val;
        if(sum==targetSum)
        {
            count++;
        }
        dfs(root->left, sum, targetSum);
        dfs(root->right, sum, targetSum);
    }

    void rec(TreeNode* root, long long targetSum)
    {
        if(root == NULL)
            return ;
        dfs(root, 0, targetSum);
        rec(root->left, targetSum);
        rec(root->right, targetSum);
    }

    int pathSum(TreeNode* root, int targetSum) {
        count =0;
        // call recusrion 
        rec(root,targetSum);
        return count;
    }
};
