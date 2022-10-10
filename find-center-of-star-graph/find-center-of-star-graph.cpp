class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
      
      int n = edges.size()+1;
      
      vector <int> v(n+1,0);
      
      for(int i=0;i<edges.size();i++)
      {
          v[edges[i][0]]++;
          v[edges[i][1]]++;
      }
      
      for(int i=1;i<=n;i++)
        if(v[i]>1)
          return i;
      
      return -1;
    }
  
};