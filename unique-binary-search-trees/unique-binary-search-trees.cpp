class Solution {
public:
    int numTrees(int n) {
      if(n<=2)
        return n;
        vector <int> v(n+1);
      v[0] = 1;
      v[1] = 1;
      v[2] = 2;
      
      for(int i=3;i<=n;i++)
      {
        for(int j=0;j<i;j++)
        {
          v[i] += v[j] * v[i-j-1];
        }
      }
      
      return v[n];
    }
};