/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        
        ArrayList<Integer> al = new ArrayList<>();
        ListNode curr = head;
        
        while(curr!=null){
            al.add(curr.val);
            curr=curr.next;
        }
        for (int i = 0,j=al.size()-1; i < j; i++,j--) {
            if (al.get(i)!=al.get(j)){
                return false;
            }
        }
        return true;


        /*Efficient Approch

         Stack<Integer> stack = new Stack();
        
        ListNode curr = head;
        while(curr!= null){
            stack.push(curr.val);
            curr = curr.next;
        }
        
        while(head!=null){
            int i = stack.pop();
            if(head.val != i){
                return false;
            }
            head= head.next;
        }
        return true;
        
        */
    }
}