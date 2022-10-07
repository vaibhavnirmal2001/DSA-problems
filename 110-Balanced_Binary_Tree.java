// Leetcode 110

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
    public class BSTPair{
        int h = -1;
        boolean isBal = true;
    }
    
    public BSTPair isBalanced_(TreeNode root){
        if(root == null)
            return new BSTPair();
        
        BSTPair lp = isBalanced_(root.left);
        BSTPair rp = isBalanced_(root.right);
        
        BSTPair myPair = new BSTPair();
        myPair.isBal = lp.isBal && rp.isBal;
        if(myPair.isBal && Math.abs(lp.h - rp.h) < 2)
            myPair.h = Math.max(lp.h,rp.h) + 1;
        else
            myPair.isBal = false;
        
        return myPair;
    }
    
    public boolean isBalanced(TreeNode root) {
        return isBalanced_(root).isBal;
    }
}
