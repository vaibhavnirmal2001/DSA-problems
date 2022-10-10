// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
   int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        function<void(int, int)> dfs = [&] (int x, int y) {
            if(x < 0 || x >= n || y < 0 || y >= m || grid[x][y] != '1') return;
            // Mark current cell as visited.
            grid[x][y] = '#';
            
            // Traverse all 8 neighbors.
            for(int i = -1; i <= 1; i++) for(int j = -1; j <= 1; j++) {
                int nx = x + i;
                int ny = y + j;
                if(x == nx && y == ny) continue; // Why should I call myself ;)
                dfs(nx, ny);
            }
        };
        
        int ans = 0;
        
        for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) if(grid[i][j] == '1') {
            ++ans;
            dfs(i, j);
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends