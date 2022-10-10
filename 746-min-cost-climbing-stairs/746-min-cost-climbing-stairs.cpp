class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size());
        int n = cost.size();
        dp[n-1] = cost[n-1];
        dp[n-2] = cost[n-2];
        
        if(n == 2)return min(dp[n-1],dp[n-2]);
        
        for(int i=n-3;i>=0;i--)
        {
            dp[i] = min(dp[i+1],dp[i+2])+cost[i];
        }
        return min(dp[1],dp[0]);
    }
};