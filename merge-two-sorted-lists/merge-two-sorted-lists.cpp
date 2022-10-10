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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        
        if(l1->val >= l2->val)
        {
            ListNode * temp = l1;
            l1 = l2;
            l2 = temp;
        }
        ListNode * dummy = new ListNode(0);
        ListNode * temp = dummy;
        dummy->next = l1;
        
        while(l1 !=NULL && l2 != NULL)
        {
            while(l1 != NULL && l1->val <= l2->val)
            {
                l1 = l1->next;
                temp = temp->next;
            }
            if(l1 != NULL && l1->val > l2->val)
            {
                temp->next = l2;
             //   temp = temp->next;
                ListNode * re  = l2;
                l2 = l1;
                l1 = re;
            }
        
        }
        
        if(l1 == NULL)
            temp->next = l2;
        if(l2 == NULL)
            temp->next = l1;
        
        return dummy->next;
    }
};