// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
      int count(int N){
// code here
int sum=0;
if(N==2 || N==0)
{
return 1;
}
for(int i=0;i<N;i=i+2) { sum+=count(i)*count(N-2-i); }return sum; } 
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends