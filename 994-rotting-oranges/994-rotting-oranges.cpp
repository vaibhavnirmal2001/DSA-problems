class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int fresh = 0;
        queue<pair<int,int>> q;
        int dir[] = {-1,0,1,0,-1};
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                    fresh++;
                if(grid[i][j] == 2)
                    q.push({i,j});
            }
        }
        
        int ans = -1;
        while(!q.empty())
        {
            int sz = q.size();
            while(sz--)
            {
                pair<int,int> p = q.front();
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int r = p.first+dir[i];
                    int c = p.second+dir[i+1];
                    
                    if(r>=0 && r<n && c>=0 && c<m && grid[r][c] == 1)
                    {
                        grid[r][c] = 2;
                        fresh--;
                        q.push({r,c});
                    }
                }
            }
            ans++;
        }
        if(fresh>0)return -1;
        if(ans == -1)return 0;
        return ans;
    }
};