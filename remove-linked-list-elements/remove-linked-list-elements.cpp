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
    ListNode* removeElements(ListNode* head, int val) {
        if(head  == NULL)return NULL;
      
      ListNode * temp = new ListNode(-1);
      temp->next = head;
      
      ListNode * ans = temp;
      
      while(temp->next != NULL)
      {
        if(temp->next->val == val)
        {
          ListNode * del = temp->next;
          temp->next = temp->next->next;
          del->next = NULL;
          delete del;
        }
        else
        {
          temp = temp->next;
        }
      }
      
      return ans->next;
    }
};