// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int biGraph(int arr[], int n, int e) {
        // code here
        unordered_map<int,vector<int>> m;
        
        int size = 2*e;
      
        if(n <= 2)
            return true;
      
        for(int i = 0; i < size; i += 2){
                m[arr[i]].push_back(arr[i+1]); 
                m[arr[i+1]].push_back(arr[i]);
            }
        
        for(auto x: m){
          if(x.second.size() <= 1)
            return false;
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
        
        int arr[2*e];
        for(int i=0; i<2*e; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.biGraph(arr,n,e) << endl;
    }
    return 0;
}  // } Driver Code Ends