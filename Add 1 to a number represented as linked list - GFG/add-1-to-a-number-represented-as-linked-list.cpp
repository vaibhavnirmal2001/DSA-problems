// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node *head)
{
       Node *p = NULL, 
       *c = head, 
       *n = head->next;
       while(c!=NULL){
            c->next = p;
            p = c;
            c = n;
            if(n!=NULL) n = n->next;
       }
       return p;
}
Node* addOne(Node *head) 
{
       head = reverse(head);
       Node *temp = head;

       while(temp!=NULL){
            //99999..... case
            if(temp->next==NULL and 
            temp->data==9)
            {
                temp->data = 1;
                Node * zeroNode = new Node(0);
                zeroNode->next = head;
                head = zeroNode;
                temp = temp->next;
            }
            else if(temp->data==9){
                //9 case
                temp->data = 0;
                temp = temp->next;
            }
            else{
                //other all cases
                temp->data++;
                temp = temp->next;
                break;
            }
        }
        head = reverse(head);
        return head;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends