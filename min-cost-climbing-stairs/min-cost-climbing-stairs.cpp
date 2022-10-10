class Solution {
public:
   int minCostClimbingStairs(vector<int>& cost) {
       int n = cost.size();
       vector<int> dp(n);
       dp[n-1] = cost[n-1];
       dp[n-2] = cost[n-2];
       if(n<=2)return min(dp[n-1],dp[n-2]);
       for(int i=n-3;i>=0;i--)
       {
           dp[i] = min(dp[i+1],dp[i+2])+cost[i];
       }
       // for(int i=0;i<n;i++)
       //     cout<<dp[i]<<" ";
       
       return min(dp[0],dp[1]);
    }
};