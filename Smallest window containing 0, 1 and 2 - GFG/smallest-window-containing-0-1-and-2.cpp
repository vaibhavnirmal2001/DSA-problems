// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   int smallestSubstring(string S) {
        if(S.size() < 3){
            return -1;
        }
        int arr[3] = {0, 0, 0};
        int i = 0;
        int j = 1;
        arr[S[i] - '0']++;
        int ans = INT_MAX;
        int n = S.size();
        while(j < n){
            arr[S[j] - '0']++;
            while(arr[S[i] - '0'] > 1 && i < j){
                arr[S[i] - '0']--;
                i++;
            }
            if(arr[0] > 0 && arr[1] > 0 && arr[2] > 0){
                ans = min(ans, (arr[0] + arr[1] + arr[2]));
            }
            j++;
        }
       if(ans == INT_MAX){
           return -1;
       }
       return ans;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}  // } Driver Code Ends