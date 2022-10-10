// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Fraction {
  public:
    int num, den;
    
    Fraction(int _a, int _b) {
        if(_a == 0 || _b == 0) {
            num = !_a;
            den = !_b;
        } else {
            bool isNeg = _a > 0 != _b > 0;
            _a = abs(_a);
            _b = abs(_b);
            int g = __gcd(_a, _b);
            num = _a / g;
            den = _b / g;
            if(isNeg) num = -num;
        }
    }
    
    bool operator<(const Fraction& other) const {
        if(num == other.num) return den < other.den;
        return num < other.num;
    }
};

class Solution {
  public:
    int mostBalloons(int N, pair<int, int> arr[]) {
        int ans = 0;
        
        // It's mandate to pop i'th balloon.
        for(int i = 0; i < N; i++) {
            int cur = 0, onSpot = 1;
            map<Fraction, int> dp;
            // Check max j'th balloons which can be popped.
            for(int j = i + 1; j < N; j++) {
                // Calculate slope beween i'th and j'th balloon.
                // (y2 - y1) / (x2 - x1)
                int num = arr[j].second - arr[i].second;
                int den = arr[j].first - arr[i].first;
                
                if(!num && !den) {
                    ++onSpot;
                    continue;
                } else {
                    Fraction ft(num, den);
                    cur = max(cur, ++dp[ft]);
                }
            }
            
            // include i'th balloon
            ans = max(ans, cur + onSpot);
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        pair<int, int> arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i].first;
        }
        for (int i = 0; i < N; i++) {
            cin >> arr[i].second;
        }
        Solution ob;
        cout << ob.mostBalloons(N, arr) << endl;
    }
}  // } Driver Code Ends