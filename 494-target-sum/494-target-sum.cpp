class Solution {
public:
//      int solve(vector<int>& nums,int target)
//     {
//         int n = nums.size();
//         vector<vector<int>> dp(n,vector<int> (target+1,0));
        
//        for(int i=0;i<n;i++){
//             if(nums[0]==0)
//                 dp[i][0] = 2;
//             if(target == arr[0])
//                 return 1;
//             return 0;
//         }
//         if(target >= nums[0]) dp[0][nums[0]] = 1;
        
         
//         for(int i=1;i<n;i++)
//         {
//             for(int j=1;j<=target;j++)
//             {
//                 int take = 0;
//                 if(nums[i]<= j)
//                     take = dp[i-1][j-nums[i]];
//                 int nottake = dp[i-1][j];
                
//                 dp[i][j] = take+nottake;
//             }
//         }
//        for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<=target;j++)
//             {
//                 cout<<dp[i][j]<<" ";
//             }
//            cout<<endl;
//        }
// //          int ans =0;
// //          for(int i=0;i<=target;i++)
// //              if(dp[n-1][i] > 1)
// //                  ans++;
// //         return ans;
//          return dp[n-1][target];
//     }
    int findWays(vector<int> &num, int tar){
     int n = num.size();

    vector<vector<int>> dp(n,vector<int>(tar+1,0));
    
    if(num[0] == 0) dp[0][0] =2;  // 2 cases -pick and not pick
    else dp[0][0] = 1;  // 1 case - not pick
    
    if(num[0]!=0 && num[0]<=tar) dp[0][num[0]] = 1;  // 1 case -pick
    
    for(int ind = 1; ind<n; ind++){
        for(int target= 0; target<=tar; target++){
            
            int notTaken = dp[ind-1][target];
    
            int taken = 0;
                if(num[ind]<=target)
                    taken = dp[ind-1][target-num[ind]];
        
            dp[ind][target]= (notTaken + taken);
        }
    }
    return dp[n-1][tar];
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for(auto a:nums)sum += a;
        
        int tar = (sum - target) /2 ;
        
        if((sum - target) % 2 == 1 || sum - target < 0 )return 0;
        sort(nums.begin(),nums.end());
        return findWays(nums,tar);
    }
};