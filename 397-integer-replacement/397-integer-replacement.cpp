class Solution 
{
    int res = 0;
public:
    int integerReplacement(int n) 
    {
        if (n == 1)
            return res;
        if (n == 3)
        {
            res += 2;
            return res;
        }
        if (n == INT_MAX)
            return 32;
        
        res ++;
        if (n & 1)
            if ((n + 1) % 4 == 0)
                integerReplacement(n + 1);
            else
                integerReplacement(n - 1);
        else
            integerReplacement(n / 2);
            
        return res;
    }
};