// { Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
        int i=0;
        int j = N-1;
        while(j>i)
        {
           
            while(i<N && i<j)
            {
                if(A[i]==1)
                {
                    break;
                }
                else
                i++;
            } 
            while(j>=0 && j>i)
            {
                if(A[j]==0)
                break;
                else
                j--;
            }
            
            swap(A[i],A[j]);
            i++;
            j--;
        }
        return;
       
    }
};

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}



  // } Driver Code Ends