/*
Name:- Vipin Kumar
Github:- Vipin-0
*/

#define mod 1000000007
class Solution {
    int n, m;
public:
    
    int getAll(int x, int y, long sum, int k, vector<vector<int>>& grid, vector<vector<vector<int>>> &dp){
        
        sum += grid[x][y];
        if(x == (n - 1) && y == (m - 1)){
            if(sum % k == 0) return 1;
            return 0;
        }
        
        if(dp[x][y][sum % k] != -1) return dp[x][y][sum % k];
        
        long ans = 0;
        if((x + 1) < n) ans += getAll(x + 1, y, sum, k, grid, dp);
        if((y + 1) < m) ans += getAll(x, y + 1, sum, k, grid, dp);
        
        ans %= mod;
        return dp[x][y][sum % k] = (int)ans;
    }
    
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        n = grid.size();
        m = grid[0].size();
        
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>> (m + 1, vector<int>(k + 1, -1)));

        return getAll(0, 0, 0, k, grid, dp);
    }
};
