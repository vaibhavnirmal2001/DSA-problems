class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n==0)
            return false;
        if(n==1)
        {
            return true;
        }
        
        int x = n/3;
        
        if(isPowerOfThree(x) && (x*3 == n))
            return true;
        return false;
        
    }
};