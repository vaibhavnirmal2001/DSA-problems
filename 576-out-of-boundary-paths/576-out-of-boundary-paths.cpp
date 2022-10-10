class Solution {
public:
    int mod = 1e9+7;
    int solve(int n,int m,int move,int i,int j, vector<vector<vector<int>>>& dp)
    {
        
    
        if(i<0 || j<0 || i>=n || j>=m)return 1;
        
        if(move == 0)return 0;
        
        if(dp[i][j][move] != -1)return dp[i][j][move];
        
        int up = solve(n,m,move-1,i-1,j,dp) % mod;
        
        int down = solve(n,m,move-1,i+1,j,dp) % mod;
        
        int left = solve(n,m,move-1,i,j-1,dp) % mod;
       
        int right = solve(n,m,move-1,i,j+1,dp) % mod;
        
        return dp[i][j][move] = ((up+down) % mod+(right+left) % mod) % mod;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(m,vector<vector<int>> (n,vector<int> (maxMove+1,-1)));
        return solve(m,n,maxMove,startRow,startColumn,dp) % mod;
    }
};