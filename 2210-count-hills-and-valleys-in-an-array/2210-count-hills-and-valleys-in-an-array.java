class Solution {
    public int countHillValley(int[] nums) {
//         int count=0;
        
//         for(int i=1;i<nums.length-1;i++){
//             if(nums[i-1] <= nums[i] && nums[i] >= nums[i+1] && nums[i]!=nums[i-1]) count++;
            
//             if(nums[i-1] >= nums[i] && nums[i] <= nums[i+1] && nums[i]!=nums[i-1]) count++;
//         }
//         return count;
         int count = 0; 
        int i = 1;
        while (i < nums.length - 1) {
            int right = i + 1;
            while (right < nums.length && nums[i] == nums[right]) right++;
            if (right == nums.length) break;
            boolean isHill = nums[i - 1] < nums[i] && nums[i] > nums[right];
            boolean isValey = nums[i - 1] > nums[i] && nums[i] < nums[right];
            if (isHill || isValey) count++;
            i++;
        }
        
        return count;
    }
}