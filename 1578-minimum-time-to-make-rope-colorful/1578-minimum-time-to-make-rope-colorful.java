class Solution {
    public int minCost(String colors, int[] neededTime) {
      int groupSum=0;
      int maxSum=0;
      int res=0;
          
      for(int i=0;i<colors.length();i++){
        if(i>0 &&colors.charAt(i)!=colors.charAt(i-1)){
         res+=groupSum-maxSum;
          groupSum=0;
           maxSum=0;
         }
                    
         groupSum+=neededTime[i];
        maxSum=Math.max(maxSum,neededTime[i]);
            }
            res+=groupSum-maxSum;
      return res;      
    }
}