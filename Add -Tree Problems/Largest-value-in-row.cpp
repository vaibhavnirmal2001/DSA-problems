// Leetcode-515
// QUES:- Given the root of a binary tree, return an array of the largest value in each row of the tree (0-indexed).

 //Input: root = [1,3,2,5,3,null,9]
// Output: [1,3,9]

//code 
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
    vector<int> largestValues(TreeNode* root) {
        vector<int> maxs;
        find(root, 0, maxs);
        return maxs;
    }

private:
    void find(TreeNode* node, int row, vector<int>& maxs) {
        if (!node) {
            return;
        }

        if (row >= maxs.size()) {
            maxs.push_back(node->val);
        }
        else {
            maxs[row] = max(maxs[row], node->val);
        }

        find(node->left, row + 1, maxs);
        find(node->right, row + 1, maxs);
    }
};