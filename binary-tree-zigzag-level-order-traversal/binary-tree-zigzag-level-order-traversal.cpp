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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL)
            return {};
      vector<vector<int>> ans;
        queue <TreeNode*> p;
        p.push(root);
        int l = 0;
        while(p.size())
        {
            vector <int> level;
            int n = p.size();
            
            for(int i=0;i<n;i++)
            {
                TreeNode * front  = p.front();
                p.pop();
                
                level.push_back(front->val);
                
                if(front->left)
                    p.push(front->left);
                if(front->right)
                    p.push(front->right);
            }
            
            if(l != 0)
            {
                reverse(level.begin(),level.end());
                l = 0;
            } 
            else
            {
                l = 1;
            }
            ans.push_back(level);
           
        }
        return ans;
    }
};