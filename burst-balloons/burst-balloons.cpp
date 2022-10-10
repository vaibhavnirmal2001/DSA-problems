class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)return 0;
        vector<vector<int>> dp(n,vector<int> (n));
        
        for(int gap = 0; gap < n;gap++ )
        {
            for(int i=0,j = gap; j<n;j++,i++)
            {
                int maxi = INT_MIN;
                for(int k = i;k<=j;k++)
                {
                    int l = (i==k ? 0 : dp[i][k-1]);
                    int r = (j == k ? 0 : dp[k+1][j]);
                    int val = (i == 0 ? 1 : nums[i-1] ) * nums[k] * (j == n-1 ? 1 : nums[j+1]);
                    
                    int sum = l+r+val;
                    
                    maxi  = max(maxi,sum);
                }
                dp[i][j] = maxi;
            }
        }
        
        return dp[0][n-1];
    }
};