class Solution {
    public int minimumOperations(int[] nums) {
       int count=0;
        for (int i = 0; i < nums.length; i++) {
            Arrays.sort(nums);
            if (nums[i]>0) {
                int x=nums[i];
                count++;
                for (int j = i; j < nums.length; j++) {
                    if (nums[j]!=0) nums[j] -=x;
                }
            }

        }
        return count;
    }
}