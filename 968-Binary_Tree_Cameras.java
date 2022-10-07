// Leetcode 968
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
    int camera = 0;
    public int minCameraCover(TreeNode root) {
        if(root == null)    return 0;
        return camera(root) == -1 ? camera + 1 : camera;
    }
    
    // 1 -> My parent/children have a camera
    // 0 -> I have a camera
    // -1 -> I need a camera
    public int camera(TreeNode root){
        if(root == null)
            return 1;
        
        int left = camera(root.left);
        int right = camera(root.right);
        
        if(left == -1 || right == -1){
            camera++;
            return 0;
        } 
        
        if(left == 0 || right == 0){
            return 1;
        }
        
        return -1;
    }
}
