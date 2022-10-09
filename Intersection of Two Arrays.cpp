#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_map<int,int> hash1, hash2;
        // Storing the Elements of both Arrays in Hashmaps 
        for(int i=0; i<n; ++i) hash1[a[i]]++;
        for(int j=0; j<m; ++j) hash2[b[j]]++;
        int ans=0;
        // Checking for the intersection 
        for(auto i: hash1) {
            if(i.second>0 and hash2[i.first]>0) ans++;
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
