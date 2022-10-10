// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
private:
    int mod = 1000000007;
    int dp[1000][1000];
public:
    int FindWaysHelper(int n, int m, vector<vector<int>> grid, int i, int j)
    {
        if(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 1) return 0;
        if(i == n-1 && j == m-1) return 1;
        grid[i][j] = 1;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = (FindWaysHelper(n, m, grid, i, j+1) + FindWaysHelper(n, m, grid, i+1, j))%mod;
    }
    
    
	int FindWays(int n, int m, vector<vector<int>>blocked_cells){
	    vector<vector<int>> grid(n, vector<int> (m, 0));
	    memset(dp, -1, sizeof(dp));
	    for(int i = 0; i < blocked_cells.size(); i++)
	    {
	        grid[blocked_cells[i][0] - 1][blocked_cells[i][1] - 1] = 1;
	    }
	    int result = FindWaysHelper(n, m, grid, 0, 0);
	    return result;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, k;
		cin >> n >> m >> k;
		vector<vector<int>>blocked_cells;
		for(int i = 0; i < k; i++){
			int x, y;
			cin >> x >> y;
			blocked_cells.push_back({x, y});
		}
		Solution obj;
		int ans = obj.FindWays(n, m, blocked_cells);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends