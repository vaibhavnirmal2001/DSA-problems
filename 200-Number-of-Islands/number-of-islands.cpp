class Solution
{
public:
    void dfs(int xpos, int ypos, int yDirection[], int xDirection[], vector<vector<char>> &grid)
    {
        grid[xpos][ypos] = '0';

        for (int i = 0; i < 4; i++)
        {
            int newx = xpos + xDirection[i];
            int newy = ypos + yDirection[i];

            if (newx >= 0 && newx < grid.size() && newy >= 0 && newy < grid[0].size())
                if (grid[newx][newy] == '1')
                    dfs(newx, newy, xDirection, yDirection, grid);
        }
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int xDirection[] = {1, 0, -1, 0};
        int yDirection[] = {0, 1, 0, -1};
        int n = grid.size(), m = grid[0].size(), ans = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (grid[i][j] == '1')
                {
                    dfs(i, j, xDirection, yDirection, grid);
                    ans++;
                }
        return ans;
    }
};