//1329-sort-the-matrix-diagonally.cpp
class Solution {
    typedef pair<int,int>pi;
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {
      vector<vector<int>>ans;
       int n=mat.size();
       int m=mat[0].size();
       map<int,priority_queue<int,vector<int>,greater<int>>>pq;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
               pq[i-j].push(mat[i][j]);
            }
      }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                mat[i][j]=pq[i-j].top();
                pq[i-j].pop();
            }
        }
        return mat; 
    }
};