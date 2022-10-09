// Leetcode 1028
/*We run a preorder depth-first search (DFS) on the root of a binary tree.

At each node in this traversal, we output D dashes (where D is the depth of this node), then we output the value of this node.  If the depth of a node is D, the depth of its immediate child is D + 1.  The depth of the root node is 0.

If a node has only one child, that child is guaranteed to be the left child.

Given the output traversal of this traversal, recover the tree and return its root.*/

/*Input: traversal = "1-2--3--4-5--6--7"
Output: [1,2,5,3,4,6,7]*/

//Code

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
   
    int i=0;
    TreeNode* recoverFromPreorder(string &S,int d)
    {
        int nextDigitPos=S.find_first_of("1234567890",i);                          // Get index of the first number after i.
        if(nextDigitPos-i!=d)                                                      // If number of '-' in between != depth return NULL
            return NULL;
        int nextDashPos=S.find("-",nextDigitPos);                                  // Get the index of the next '-'
        int rootValue=stoi(S.substr(nextDigitPos,nextDashPos-nextDigitPos));
        TreeNode* root=new TreeNode(rootValue);                                    // Create the root with the node's value
        i=nextDashPos;                                                             // Move index forward for future recursions.
        root->left=recoverFromPreorder(S,d+1);                                     // Create left subtree
        root->right=recoverFromPreorder(S,d+1);                                    // Create right subtree
        return root;
    }
    TreeNode* recoverFromPreorder(string S)
    {
        return recoverFromPreorder(S,0);
        
    }
};