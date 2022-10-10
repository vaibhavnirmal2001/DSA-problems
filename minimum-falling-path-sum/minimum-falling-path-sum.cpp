class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
    vector<vector<int>> dp(A.size(),vector<int>(A.size(),INT_MAX));
    for(int i=0;i<A.size();i++){
        dp[0][i] = A[0][i];
    }
    for(int i=1;i<A.size();i++){
        for(int j=0;j<A.size();j++){
            if(j>0 and j<A.size()-1){
                dp[i][j] = min(dp[i-1][j-1]+A[i][j],dp[i-1][j]+A[i][j]);
                dp[i][j] = min(dp[i-1][j+1]+A[i][j],dp[i][j]);
            }
            else if(j==0){
                dp[i][j] = min(dp[i-1][j+1]+A[i][j],dp[i-1][j]+A[i][j]);
            }
            else if(j == A.size()-1){
                dp[i][j] = min(dp[i-1][j-1]+A[i][j],dp[i-1][j]+A[i][j]);
            }
        }
    }
    
    int ans = INT_MAX;
    for(auto& x:dp[dp.size()-1]){
            ans = min(ans,x);
    }
    return ans;
    }
};