class Solution {
public:
    int numSquares(int n) {
      
      if(n<=3)
        return n;
         vector<int> v(n + 1);
  v[0] = 0;
  v[1] = 1;
  v[2] = 2;
  v[3] = 3;

  for (int i = 4; i <= n; i++)
  {
    v[i] = i;
    for (int j = 1; j <= ceil(sqrt(i)); j++)
    {
      int temp = j * j;
      if (temp > i)
        break;

      v[i] = min(v[i], 1 + v[i - temp]);
    }
  }
  return v[n];
    }
};