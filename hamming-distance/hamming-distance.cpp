class Solution {
public:
    int hammingDistance(int x, int y) {
        
      int sum = 0;
      
      while(x != 0 ||  y != 0)
      {
        if(x % 2 == 0)
        {
          if(y % 2 != 0)
          {
            sum++;
          }
        }
        else
        {
          if(y % 2 == 0)
          {
            sum++;
          }
        }
        x = x/2;
        y = y/2;
      }
      
      return sum;
    }
};