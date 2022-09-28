class Solution {
    public int dominantIndex(int[] nums) {
        int maxMax = nums[0], k = 0, max = -1;
        for (int i = 1; i < nums.length; i++) 
            if (nums[i] > maxMax) {
                max = maxMax;
                maxMax = nums[i];
                k = i;
            } else if (nums[i] > max)
                max = nums[i];
        return maxMax >= 2 * max ? k : -1;
    }
}