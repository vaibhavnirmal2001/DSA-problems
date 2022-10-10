// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
   int xorCal(int k){
       
       
       if(k == 1) return 2;
       int val = k/2;
       if((val ^ (val +1)) == k) return val;
       else{
           return -1;
       }
   }
};
// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        
        Solution ob;
        cout<<ob.xorCal(k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends