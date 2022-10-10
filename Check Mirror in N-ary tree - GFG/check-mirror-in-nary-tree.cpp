// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        vector<vector<int>> adjA(n+1),adjB(n+1);
        for(int i=0;i<2*e;i+=2){
            adjA[A[i]].push_back(A[i+1]);
            adjB[B[i]].push_back(B[i+1]);
        }

        for(int i=1;i<=n;i++){
            int sizel = adjA[i].size(),sizer = adjB[i].size();
            if(sizel!=sizer)return false;
            for(int j=0;j<sizel;j++){
                if(adjA[i][j] != adjB[i][sizel-j-1]){
                return false;
                }
            }
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        
        cin>>n>>e;
        int A[2*e], B[2*e];
        
        for(int i=0; i<2*e; i++)
            cin>>A[i];
            
        for(int i=0; i<2*e; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.checkMirrorTree(n,e,A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends