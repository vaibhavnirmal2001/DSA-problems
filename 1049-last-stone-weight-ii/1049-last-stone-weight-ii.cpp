class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        
        int n = stones.size();
        if(n == 1)return stones[0];
        int sum = 0;
        for(auto i:stones)sum+=i;
        vector<vector<int>> dp(stones.size(),vector<int> (sum+1,0));
        
        dp[0][stones[0]] = 1;
        for(int i=0;i<n;i++)
            dp[i][0] = 1;
        
        int ans = INT_MIN;
        for(int i=1;i<n;i++)
        {
            for(int j = 1;j<=sum;j++)
            {
                int nottake = dp[i-1][j];
                int take = 0;
                if(stones[i] <= j)
                    take = dp[i-1][j-stones[i]];
                
                dp[i][j] = take|nottake;
                
                if(i == n-1 && j<=sum/2 && dp[i][j] == 1)
                    ans = max(ans,j);
            }
        }
        if(ans == INT_MIN)
            return -1;
        
        return (sum - (2*ans));
    }
};