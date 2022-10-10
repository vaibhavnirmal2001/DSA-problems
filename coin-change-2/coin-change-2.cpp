class Solution {
public:
    
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        if(amount == 0) {
            return 1;
        }
        if(n==0)
          return 0;
        vector<vector<int>> dp;
        dp.resize(n+2,vector<int>(amount+2,-1));
        
        for(int i=0;i<n+1;i++)
        {
            dp[i][0] = 1;
        }
        
        for(int i=0;i<amount+1;i++)
        {
            dp[0][i] = 0;
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<amount+1;j++)
            {
                if(coins[i-1] > j) {
                    dp[i][j] = dp[i-1][j];
                } else {
                    dp[i][j] = dp[i-1][j]+dp[i][j-coins[i-1]];
                }
            }
        }
        return dp[n][amount];
        
    }
};