class Solution {
public:
    int recursion(int n, int cur)
    {
        // base
        if (n == 0 || cur == 0) {
            return 1;
        }
        // recurisve
        if (cur > n) {
            return recursion(n - 0, cur - 1);
        }
        else {
            return max(recursion(n - 0, cur - 1), cur * recursion(n - cur, cur));
        }
    }
    
    int integerBreak(int n) 
    {
        return recursion(n, n - 1);    
    }
};