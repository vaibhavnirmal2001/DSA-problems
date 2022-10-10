class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(prices.size()==0 || k==0)return 0;
        vector<vector<int>> dp(k+1,vector<int> (prices.size()));
        
        for(int i=1;i<=k;i++)
        {
            int maxi ;
            for(int j=1;j<prices.size();j++)
            {
                if(j==1)
                {
                    maxi =-1* prices[0];
                }
                
                    // dp[i][j] = dp[i][j-1];
                    // for(int k = 0;k<j;k++)
                    // {
                    //     dp[i][j] = max(dp[i][j],dp[i-1][k] + prices[j] - prices[k] );
                    // }
                    
                    dp[i][j] = max(dp[i][j-1] ,maxi+prices[j]);
                    maxi = max(maxi,dp[i-1][j] - prices[j]);
            }
            
            
        }
        
        
//         for(int i=0;i<=k;i++)
//         {
//             for(int j=0;j<prices.size();j++)
//             {
//                 cout<<dp[i][j]<<" ";       
//             }
//             cout<<endl;
//         }
        
        return dp[k][prices.size()-1];
    }
};