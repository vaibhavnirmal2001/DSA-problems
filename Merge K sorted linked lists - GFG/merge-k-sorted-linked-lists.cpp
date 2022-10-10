// { Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

 // } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution {
 public:
   //Function to merge K sorted linked list.
   Node * mergeKLists(Node *arr[], int k)
   {
          
          int minN = INT_MAX;
          int minNode = 0;
          
          Node* head = NULL;
          Node * ans = NULL;
          
          while (1)
          {
              int nodes = 0;
              for (int i = 0; i < k; ++i)
               {
                   if (arr[i])
                   {
                       if (minN > arr[i]->data)
                           {
                               minN = arr[i]->data;
                               minNode = i;
                           }
                   }
                   else
                       ++nodes;
               }
               
               if (nodes == k)
                   break;
               
               if (!head)
               {
                   head = new Node(minN);
                   ans = head;
               }
               else
               {
                   head->next = new Node(minN);  
                   head = head->next;
               }           
               arr[minNode] = arr[minNode] ->next;
               minN = INT_MAX;               
          }          
          return ans;
   }
};


// { Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
  // } Driver Code Ends