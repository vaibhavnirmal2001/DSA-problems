class Solution {

public List<List<Integer>> kSmallestPairs(int[] nums1, int[] nums2, int k) {
        PriorityQueue<int[]> que = new PriorityQueue<>((a,b)->a[2]-b[2]);
        List<List<Integer>> res = new ArrayList<>();
        if(nums1.length==0 || nums2.length==0 || k==0) return res;
        for(int i=0; i<nums1.length && i<k; i++) 
            que.offer(new int[]{i, 0, nums1[i] + nums2[0]});
        while(k-- > 0 && !que.isEmpty()){
            int[] curr = que.poll();
            int i = curr[0], j = curr[1];
            res.add(Arrays.asList(nums1[i], nums2[j]));
            if(j+1 == nums2.length) continue;
            que.offer(new int[]{i, j+1, nums1[i] + nums2[j+1]});
        }
        return res;
     }
        
        
    
}