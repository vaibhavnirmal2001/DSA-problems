class Solution {
     public int subarraySum(int[] nums, int k) {
        
        int ans=0;
        HashMap<Integer,Integer> map=new HashMap<>();
        int sum=0;
        map.put(0,1);
        for(int i=0;i<nums.length;i++)
        {
            sum+=nums[i];
            int rsum=sum-k;
            if(map.containsKey(rsum))
            {
              ans+=map.get(rsum);  
            }
            map.put(sum,map.getOrDefault(sum,0)+1);
            System.out.println(ans);
        }
        
        
        return ans;
        
        
        
    }
}