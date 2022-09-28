class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        //  for (int i = 0; i < nums.length; i++) {
        //     for (int j = 0; j < nums.length && i!=j; j++) {
        //         if (nums[i]==nums[j]){
        //             if (Math.abs(i - j) <= k){
        //                 return true;
        //             }
        //         }
        //     }
        // }
        // return false;
        
        Set<Integer> set = new HashSet<Integer>();
        for(int i = 0; i < nums.length; i++){
            if(i > k) set.remove(nums[i-k-1]);
            if(!set.add(nums[i])) return true;
        }
        return false;
    }
}