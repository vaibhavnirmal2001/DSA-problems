class Solution {
    public long zeroFilledSubarray(int[] nums) {
        long ans = 0;
        long numSubarray = 0;
        
        for (int num: nums) {
            if (num == 0) {
                numSubarray++;
            } else {
                numSubarray = 0;
            }
            
            ans += numSubarray;
        }
        
        return ans;
    }
}