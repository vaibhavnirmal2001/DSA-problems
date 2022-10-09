// Leetcode 103
// Ques:- Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

 // code:
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
        
        stack<TreeNode*> LtoR, RtoL;
        int lvl = 1;
        
        vector<vector<int>> ans;
        
        if(!root) return ans;

        RtoL.push(root);

        while(!RtoL.empty() || !LtoR.empty()) {
            
            vector<int> v;
            
            if(lvl % 2 == 1) {
                                
                while(!RtoL.empty()) {

                    TreeNode* curr = RtoL.top();
                    RtoL.pop();
                    v.push_back(curr -> val);

                    if(curr -> left) LtoR.push(curr -> left);
                    if(curr -> right) LtoR.push(curr -> right);        
                }   

            } else {
                
                while(!LtoR.empty()) {

                    TreeNode *curr = LtoR.top();
                    LtoR.pop();
                    v.push_back(curr -> val);

                    if(curr -> right) RtoL.push(curr -> right);
                    if(curr -> left) RtoL.push(curr -> left);                
                } 
            }
            
            ans.push_back(v);
            lvl++;
            
        }
        
        return ans;
        
    }
};