// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    const int mod = 1e9+7;
    
    using ll = long long;
    int max_K;
    int kvowelwords(int N, int K) {
        int cnt = 0;
        max_K = K;
        vector<vector<ll>> dp(N+1,vector<ll> (K+1,-1));
        
        for(int i=0; i<=N; i++){
            for(int j=0; j<=K; j++){
                if(i == 0){
                    dp[i][j] = 1;
                    continue;
                }
                if(j>0){
                    dp[i][j] = (5*dp[i-1][j-1]%mod+21*dp[i-1][K]%mod)%mod;
                }
                else{
                    dp[i][j] = 21*dp[i-1][K]%mod;
                }
            }
        }
        return dp[N][K];
        
        // ll ans = solve(N,K,dp);
        // return (int)ans;
    }
    
    long long solve(int n,int k,vector<vector<ll>> &dp){
        
        if(n == 0){
            return 1;
        }
        if(dp[n][k] != -1){
            return dp[n][k];
        }
        if(k>0){
            //take oval
            ll ans1 = 5*solve(n-1,k-1,dp)%mod;
            
            //no take oval
            
            ll ans2 = 21*solve(n-1,max_K,dp)%mod;
            
            return dp[n][k] = (ans1+ans2)%mod;
        }
        else{
            //not possible to take oval, broken sequence so can take ovals again
            return dp[n][k] = 21*solve(n-1,max_K,dp)%mod;
        }
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;int K;
        cin >>N>>K;
        
        Solution ob;
        int ans = ob.kvowelwords(N,K);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends