// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long countPairs(int N, int X, vector<int> numbers){
        unordered_map<int, int> suffixMap;
        int n = X, suffix = 0, mul = 1;
        while(n > 0) {
            if(n % 10) {
                suffix = n % 10 * mul + suffix;
                for(auto num: numbers) suffixMap[suffix] += num == suffix;
            }
            n /= 10;
            mul *= 10;
        }
        
        int ans = 0;
        mul /= 10;
        while(mul > 0) {
            int prefix = X / mul;
            int suffix = X % mul;
            
            // Don't calculate if suffix starts with 0.
            if(suffix >= mul / 10) {
                int prefixCount = 0;
                for(auto num: numbers) prefixCount += num == prefix;
                
                ans += prefixCount * suffixMap[suffix];
                if(prefix == suffix) ans -= prefixCount;
            }
            
            mul /= 10;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
}  // } Driver Code Ends