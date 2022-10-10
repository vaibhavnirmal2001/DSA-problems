class Solution {
public:
    int tribonacci(int n) {
         vector <int> a;
      a.push_back(0);
      a.push_back(1);
      a.push_back(1);
      for(int i=3;i<=n;i++)
      {
        a.push_back(a[i-1]+a[i-2]+a[i-3]);
      }
      return a[n];
    }
};