class Solution {
public:
    
    int f(int curr,int total ,int paste_len,vector<vector<int>>& dp)
    {
        if(curr>total)return 1e9;
        
        if(curr == total)return 0;
        
        if(dp[curr][paste_len] != -1)return dp[curr][paste_len];
        
        int copy = 2 + f(curr*2,total,curr,dp);
        
        int paste = 1 + f(curr + paste_len , total , paste_len,dp);
        
        return dp[curr][paste_len] = min(copy,paste);
    }
    
    int minSteps(int n) {
        if(n==1)return 0;
        vector<vector<int>> dp(n,vector<int> (n,-1));
        return 1 + f(1,n,1,dp);
    }
};