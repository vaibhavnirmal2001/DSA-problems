/*Given the head of a singly linked list, return true if it is a palindrome or false otherwise.*/
/*Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false*/
//code
/*How will this work ?

temp node will be first compared when head will be pointing to last node.
Going back to previous recursive call -> preivous of head will be comapred to next of temp.
This all will be done recurssively.*/

class Solution {
public:
    ListNode* temp;
    
    bool check(ListNode* head) {
        if (NULL == head) return true;
        bool res = check(head->next) & (temp->val == head->val);
        temp = temp->next;
        return res;
    }
    
    bool isPalindrome(ListNode* head) {
        temp = head;
        return check(head);
    }
};