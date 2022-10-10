class Solution {
public:
    
    bool canMakeSubset(vector<int>& nums,int target)
    {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int> (target+1,0));
        
        for(int i=0;i<n;i++) dp[i][0] = 1;
        if(target >= nums[0]) dp[0][nums[0]] = 1;
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<=target;j++)
            {
                int take = 0;
                if(nums[i]<= j)
                    take = dp[i-1][j-nums[i]];
                int nottake = dp[i-1][j];
                
                dp[i][j] = take|nottake;
            }
        }
        return dp[n-1][target];
        
    }
    
    
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto a:nums) sum += a;
        if(sum % 2 == 1 )return false;
        
        sum /= 2;
        
        return canMakeSubset(nums,sum);
    }
};