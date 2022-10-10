// { Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    int L = num-K+1;
    
    if(K == L or K > num)
        return head;
        
    if(K > L)
        swap(K, L);
    
    Node *first, *second, *prev1, *prev2;
    
    prev1 = prev2 = head;
    
    for(int i=0; i<K-2; i++)
        prev1 = prev1->next;
    
    for(int i=0; i<L-2; i++)
        prev2 = prev2->next;
    
    first = prev1->next;
    second = prev2->next;
    
    if(K == 1)
    {
        first = head;
        head = second;
        second->next = first->next;
        prev2->next = first;
        first->next = nullptr;
        
        return head;
    }
    
    if(K+1 == L)
    {
        prev1->next = second;
        first->next = second->next;
        second->next = first;
        
        return head;
    }
    
    Node *temp = second->next;
    
    prev1->next = second;
    second->next = first->next;
    
    prev2->next = first;
    first->next = temp;
    
    return head;
}
