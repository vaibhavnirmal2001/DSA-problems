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
    ListNode* oddEvenList(ListNode* head) {
      
      if(head == NULL || head->next == NULL)return head;
       ListNode* f = head;
      ListNode * g= f;
      ListNode* s = head->next;
      ListNode * d  = s;
      
      while(f  &&f->next && s && s->next)
      {
        if(f->next && f->next->next)
        {
            f->next = f->next->next;
          f = f->next;
         // cout<<"a"<<endl;
        } 
        if(s->next)
        {
          s->next = s->next->next;
          s = s->next;
        //  cout<<"v"<<endl;
        } 
      }
      
      f->next = d;
      return g;
      
    }
};