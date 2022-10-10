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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(root == NULL)
            return ans;
        
        queue <TreeNode*> pendingNodes;
        pendingNodes.push(root);
        int siz  = 1;
         vector<int> level;
        while(pendingNodes.size())
        {
             
            if(siz == 0)
            {
                siz  = pendingNodes.size();
                ans.push_back(level);
                level.clear();
            }
            TreeNode* front = pendingNodes.front();
             pendingNodes.pop();
            level.push_back(front->val);
         //   cout<<siz<<endl;
            siz--;
            
            if(front->left)
            {
                pendingNodes.push(front->left);
            }
            if(front->right)
            {
                pendingNodes.push(front->right);
            }
            
        
        }
         if(siz == 0)
            {
                siz  = pendingNodes.size();
                ans.push_back(level);
                level.clear();
            }
        
        return ans;
    }
};









  //   TreeNode* start = pendingNodes.front();
           
//             vector<int> level;
//             int siz = pendingNodes.size();
//             while(siz--)
//             {
//                 level.push_back(start->data);
                
//             }
//             TreeNode* front = pendingNodes.front();
//             pendingNodes.pop();
            
            // 