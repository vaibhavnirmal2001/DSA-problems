// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
       int max_so_far = INT_MIN;
       int max_till_here = 0;
       
       for(int i=0;i<n;i++)
       {
           max_till_here = max_till_here + arr[i];
           
           if(max_till_here > max_so_far)
           {
               max_so_far = max_till_here;
           }
           
           if(max_till_here <  0)
           max_till_here = 0;
       }
       return max_so_far;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends