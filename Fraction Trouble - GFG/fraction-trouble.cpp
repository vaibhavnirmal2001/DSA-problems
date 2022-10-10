// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> numAndDen(int n, int d) {
       // code here
           int numerator =-1, denominator =1;
      for(int y=d+1; y<=10000; y++) {
       int x = (n*y)/d;
       if(__gcd(x,y) == 1) {
           if(1.0*x/y > 1.0*numerator /denominator )
               numerator =x, denominator =y;
       }
   }
   return {numerator , denominator };
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,d;
        cin >> n >> d;
        Solution ob;
        vector<int>ans=ob.numAndDen(n,d);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends