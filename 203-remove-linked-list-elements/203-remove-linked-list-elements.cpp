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
    
    ListNode* solve(ListNode* head, int val)
    {
        if(head == NULL)return head;
        if(head->val == val)
        {
            return solve(head->next,val);
        }
        else
        {
            head->next = solve(head->next,val);
            return head;
        }
        return NULL;
    }
    
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * dummy = new ListNode(-1);
        dummy->next = head;
        dummy = solve(dummy,val);
        return dummy->next;
    }
};