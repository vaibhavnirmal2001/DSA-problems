class Solution {
    static int dp[][];
    public int longestArithSeqLength(int[] a) {
        int max=0;
        dp= new int [a.length+1][1002];
        if(a.length<=2)return a.length;
        for(int num[]:dp)Arrays.fill(num,-1);
        for(int i=0;i<a.length-1;i++){
            for(int j=i+1;j<a.length;j++){
                int diff=a[j]-a[i];
                int ans=2+solve(i,diff,a);
                max=Math.max(max,ans);
            }
        }
        return max;
    }
    static int solve(int index,int diff,int a[]){
        if(index<0)return 0;
        int ans=0;
       if(dp[index][diff+500]!=-1)return dp[index][diff+500];
      
        // map.put(index,diff);
      
        for(int j=index-1;j>=0;j--){
            if(a[index]-a[j]==diff){
                ans=Math.max(ans,1+solve(j,diff,a));
            }
        }
       
      
        return dp[index][diff+500]=ans;
    }
    static class Node{
        int index,diff;
        Node(int index,int diff){
            this.index=index;
            this.diff=diff;
        }
    }
}