/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public List<List<Integer>> levelOrder(Node root) {
        
        List<List<Integer>> output = new ArrayList<>();
        Queue<Node> queue = new LinkedList<>();
        
        if(root == null) return output;
        queue.add(root);
        
        while(!queue.isEmpty()){
            
            int rowLen = queue.size();
            List<Integer> currRow = new ArrayList<>();
            for(int i = 0; i < rowLen; i++){
                
                Node curr = queue.poll();
                currRow.add(curr.val);
    
                int numChildren = curr.children.size();
                for(int c = 0; c < numChildren; c++) { 
                    if(curr.children.get(c) != null) queue.add(curr.children.get(c));
                }
            }
            output.add(currRow);
        }
        return output;
    }
}
