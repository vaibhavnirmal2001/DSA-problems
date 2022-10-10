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
    ListNode* rotateRight(ListNode* head, int k) {
     
        if(k == 0 || head == NULL || head->next == NULL)
            return head;
        
        int count = 0;
        ListNode * temp = head;
        while(temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        
        
        k = k % count;
        if(k==0)return head;
        
       // cout<<k<<endl;
        ListNode * fast = head;
        ListNode * slow = head;
        
        while(k!=0)
        {
            fast = fast->next;
            k--;
        }
       // cout<<slow->val<<endl;
       // cout<<fast->val<<endl;
        while(fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode * res = slow->next;
        slow->next = NULL;
        fast->next = head;
        return res;
        
        
    }
};