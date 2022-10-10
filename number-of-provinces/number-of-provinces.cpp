class Solution {
public:
  
  
    void dfs(int source,vector<vector<int>>& isConnected,int n,bool * visited)
    {
      visited[source] = true;
      for(int i = 0;i<n;i++)
      {
        if(i+1 == source)
          continue;
        if(!visited[i+1] && isConnected[source-1][i] == 1 )
        {
          dfs(i+1,isConnected,n,visited);
        }
      }
      return;
    }
  
    int findCircleNum(vector<vector<int>>& isConnected) {
      int n = isConnected.size();
      bool * visited = new bool[n+1];
      int count = 0;
      for(int i=0;i<=n;i++)
        visited[i] = false;
      
      for(int i=1;i<=n ;i++)
      {
        if(!visited[i])
        {
          dfs(i,isConnected,n,visited);
          count++;
        }
      }
      return count;
    }
};