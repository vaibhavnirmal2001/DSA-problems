class Solution {
public:
  
  bool isBipartiteBFS(vector<vector<int>>& graph,bool * visited,int * color,int source)
  {
    color[source] = 0;
    visited[source] = true;
    
    
    queue <int> q;
    q.push(source);
    
    while(!q.empty())
    {
      int front = q.front();
      q.pop();
      
      for(auto nbrs:graph[front])
      {
        if(visited[nbrs]  ==  false)
        {
          visited[nbrs] = true;
          color[nbrs] = !color[front];
          q.push(nbrs);
        }
        else
        {
          if(color[nbrs] == color[front])
            return false;
        }
        
      }
    }
    return true;
  }
  
    bool isBipartite(vector<vector<int>>& graph) {
      bool * visited = new bool [graph.size()] {false};
      int * color = new int  [graph.size()] {-1};
      
      
      for(int i=0;i<graph.size();i++)
      {
        if(visited[i] == false)
        {
          if(isBipartiteBFS(graph,visited,color,i)==false)
            return false;
        }
      }
      return true;
      
    }
};