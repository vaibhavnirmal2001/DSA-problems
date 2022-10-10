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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL)return 0;
        int ans = 0;
        queue<pair<TreeNode*,int>> pd;
        pd.push({root,0});
        
        while(!pd.empty())
        {
            int size = pd.size();
            int low,high;
            int min = pd.front().second;
            for(int i=0;i<size;i++)
            {
                pair<TreeNode*,int> k = pd.front();
                TreeNode * front = k.first;
                pd.pop();
                long long int num = k.second - min;
                if(i==0)low = num;
                if(i == size-1) high = num;
                if(front->left)pd.push({front->left,2*num*1LL + 1});
                if(front->right)pd.push({front->right,2*num*1LL+2});
            }
            ans = max(ans,(int)high-low+1);
        }
        return ans;
    }
};