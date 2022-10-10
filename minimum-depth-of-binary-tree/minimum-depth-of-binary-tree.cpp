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
    int minDepth(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        queue <TreeNode*> q;
        int ans = 0;
        q.push(root);
        while(q.size())
        {
            int n = q.size();
            ans++;
            
            for(int i=0;i<n;i++)
            {
            TreeNode * front = q.front();
            q.pop();
            
            if(front->left == NULL && front->right == NULL)
                return ans;
                
            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
            
            }  
            
        }
        return ans;
    }
};