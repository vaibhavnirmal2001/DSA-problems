class Solution {
public:
    int arrangeCoins(int n) {
        long end = n;
        long low = 0;
        long high = n;
        
        while(low <= high)
        {
            long mid = low + (high-low)/2;
            if(mid*(mid+1) <= 2*end)
            {
                low = mid+1;
            }
            else
                high = mid-1;
        }
        return (int)(low-1);
    }
};