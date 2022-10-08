class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      
        vector<int> dp(nums.size() , 1);
        
        // dp[i] -> LIS ending at index i
        
        int ans = 1;
        
        for(int i=0; i<nums.size(); i++){
             int mx = INT_MIN;
            for(int j=0; j < i ;j++){
               if(nums[i] > nums[j]) {
                   mx = max(mx, dp[j]);
               }
            }
            if(mx != INT_MIN)dp[i] = mx + 1;
            if(dp[i] > ans)ans = dp[i];
        }

        return ans;
    }
};