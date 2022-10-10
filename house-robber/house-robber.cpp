class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1);
        
        dp[0] = 0;
        dp[1] = nums[0];
        
        if(nums.size()<=1)return nums[0];
        for(int i=2;i<=n;i++)
        {
            if(dp[i-1]>=dp[i-2]+nums[i-1])
                dp[i] = dp[i-1];
            else
                dp[i] = dp[i-2]+nums[i-1];
        }
        
        return dp[n];
    }
};