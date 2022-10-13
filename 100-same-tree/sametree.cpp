// contributed by ISHITA SINGHAL


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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL || q==NULL){
            return false;
        }
        if(p->val!=q->val){
            return false;
        }
       bool a1= isSameTree(p->left,q->left);
        bool a2= isSameTree(p->right,q->right);
        if(a1==true && a2==true){
            return true;
        }
        else{
            return false;
        }
    }
};
