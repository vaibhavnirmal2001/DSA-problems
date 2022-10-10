class Solution {
public:
      
    bool binarysearch(vector<int> v,int s,int e,int target)
    {
      if(s<=e)
      {
        int m = (s+e)/2;
        if(v[m] == target)
          return true;
        else if(v[m]<target)
        {
          return binarysearch(v,m+1,e,target);
        }
        return binarysearch(v,s,m-1,target);
      }
      return false;
    }
  
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      
      int m = matrix.size();
      int n = matrix[0].size();
      
      int i=0;
      while(i<m &&target > matrix[i][n-1])
      {
        i++;
      }
      if(i == m)
        return false;
      return binarysearch(matrix[i],0,n-1,target);
      
      
    }
};