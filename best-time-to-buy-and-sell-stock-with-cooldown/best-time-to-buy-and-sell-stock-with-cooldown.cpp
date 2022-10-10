class Solution {
public:
    int maxProfit(vector<int>& arr) {
       vector<vector<int>> dp(2,vector<int> (arr.size()+1));
 
 dp[0][1] = -1*arr[0];
 dp[1][1] = 0;
 
 for(int i=2;i<=arr.size();i++)
 {
    dp[0][i] = max(dp[0][i-1], dp[1][i-2]-arr[i-1]);
      dp[1][i] = max(dp[0][i-1]+arr[i-1],dp[1][i-1]);
 }
        
        
        return dp[1][arr.size()];
    }
};