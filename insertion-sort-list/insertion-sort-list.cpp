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
    ListNode* insertionSortList(ListNode* head) {
        for(auto cur = head; cur; cur = cur -> next) 
            for(auto j = head; j != cur; j = j -> next) 
                if(j -> val > cur -> val) 
                    swap(j -> val, cur -> val);
        return head;    
    }
};