// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
   int findPosition(int N) {
  if (N == 0) return -1;
  if (N == 1 || N == 2) return N;
  // if N is odd and > 1, it will have more than 1 set bits;
  if (N & 1) return -1;

  int setBitPos = 2;
  while (N > 2) {
    setBitPos++;
    N = N / 2;
    if (!N & 1) continue;
    if (N & 1) return -1;
  }
  return setBitPos;
}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends