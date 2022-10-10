class Solution {
public:
    bool isPowerOfTwo(int n) {
    //    n = abs(n);
        
        if(n <= 0)
            return false;
        
        if(n%2 == 0)
            return isPowerOfTwo(n/2);
        
        if(n == 1)
            return true;
        
        return false;
        
    }
};