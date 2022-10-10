class Solution {
    int mod = 1000000007;
    public int numRollsToTarget(int n, int k, int target) {
        int[][] dp = new int[n+1][target+1];
        for(int i=0;i<dp.length;i++){
            Arrays.fill(dp[i], -1);
        }
        return roll(n, k, target, dp);
    }
    
    public int roll(int n, int k, int t, int[][] dp){
        if(t<0) return 0;
        if(n==0) 
            return t==0 ? 1 : 0;
        if(dp[n][t] ==-1) {
            int res = 0;
            for(int i=1;i<=k;i++){
                res= (res+roll(n-1, k, t-i, dp))%mod;
            }
            dp[n][t] = res;
        }
        return dp[n][t];
    }
}