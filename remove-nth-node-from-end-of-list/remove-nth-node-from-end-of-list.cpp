/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
        ListNode *dummy = new ListNode();
        dummy->next = head;
        
        ListNode * slow = dummy;
        ListNode * fast = dummy;
        
        while(n--)
        {
            fast = fast->next;
        }
        
        while(fast ->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        ListNode * node = slow->next;
        slow->next = slow->next->next;
        delete node;
        
        return dummy->next;
        
    }
};