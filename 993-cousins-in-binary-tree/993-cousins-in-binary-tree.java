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
    public boolean isCousins(TreeNode root, int x, int y) {
        if(root == null)
            return false;
        
        Queue<TreeNode> q = new LinkedList();
        q.add(root);
        while(q.size()>0){
            List<Integer> level = new ArrayList();
            int size = q.size();
            for(int i = 0;i<size;i++){
                TreeNode temp = q.remove();
                if(temp.left != null && temp.right != null){
                    if(temp.left.val == x && temp.right.val == y)
                        return false;
                    if(temp.right.val == x && temp.left.val == y)
                        return false;
                }
                level.add(temp.val);
                    
                if(temp.left != null)
                    q.add(temp.left);
                if(temp.right != null)
                    q.add(temp.right);
            }
            if(level.contains(x) && level.contains(y))
                return true;
        }
        
            return false;
    }
}