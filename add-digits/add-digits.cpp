class Solution {
public:
    int addDigits(int num) {
        if(num / 10 == 0)
          return num;
      
      int temp = num;
      int sum = 0;
      while(temp)
      {
        sum += temp%10;
        temp /= 10;
      }
      return addDigits(sum);
    }
};