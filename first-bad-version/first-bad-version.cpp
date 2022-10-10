class Solution {
public:
    int firstBadVersion(int n) {
        int lower = 1, upper = n, mid;
        while(lower < upper) {
            mid = lower + (upper - lower) / 2;
            if(!isBadVersion(mid)) lower = mid + 1;   /* Only one call to API */
            else upper = mid;
        }
        return lower;   /* Because there will alway be a bad version, return lower here */
    }
};