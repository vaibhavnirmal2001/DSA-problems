class Solution {
public:
    
//     int solve(vector<int>& nums, int k,int i,int j,vector<vector<int>>& dp)
//     {
//         if(i>=j)
//             return dp[i][j] = 0;
//         if(k == 0)
//             return dp[i][j] = 0;
//         if(dp[i][j] != -1)return dp[i][j];
        
//         int poss1  = nums[i] + solve(nums,k-1,i+1,j,dp);
//         int poss2  = nums[j] + solve(nums,k-1,i,j-1,dp);
        
//         return dp[i][j] = max(poss1,poss2);
//     }
    
    int maxScore(vector<int>& nums, int k) {
        if(k == nums.size())
        {   int ans = 0;
            for(auto a:nums)ans+=a;
            return ans;
        }
        // vector<vector<int>> dp(nums.size(),vector<int> (nums.size(),-1));
        // int ans = solve(nums,k,0,nums.size()-1,dp);
        // return ans;
        
        int rem = nums.size() - k;
        int ans = 0;
        for(int i=0;i<rem;i++)
            ans += nums[i];
     //   cout<<ans<<endl;
        int curr = ans;
        for(int i=rem;i<nums.size();i++)
        {
            curr = curr - nums[i-rem] + nums[i];
            ans = min(ans,curr); 
        }
            
        
        int totsum  = 0;
        for(auto a:nums)totsum+=a;
       // cout<<totsum<<" "<<ans<<" "<<rem<<endl;
        return totsum - ans;
    }
};