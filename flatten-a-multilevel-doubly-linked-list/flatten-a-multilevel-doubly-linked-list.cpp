/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    
Node* ff(Node* head, Node* rest = nullptr) {
  if (!head) return rest;
  head->next = ff(head->child, ff(head->next, rest));
  if (head->next) head->next->prev = head;
  head->child = nullptr;
  return head;
}
    Node* flatten(Node* head) {
        return ff(head);
    }
};
