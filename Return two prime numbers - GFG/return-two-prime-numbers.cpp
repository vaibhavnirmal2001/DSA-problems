// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution{
public:
   bool prime(int a)
   {
       int k=sqrt(a);
       for(int i=2;i<=k;i++)
       {
           if(a%i==0)
           return false;
       }
       return true;
   }
   vector<int> primeDivision(int N){
       for(int i=2;i<=N-2;i++)
       {
           if(prime(i) && prime(N-i))
           {
               return {i,N-i};
           }
       }
       return {};
   }
};
// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends