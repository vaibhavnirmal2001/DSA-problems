// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
public:
int min_coin(vector<int>nums, int amount, int i, vector<vector<int>>&dp){
    if(amount==0)
        return 0;
        
    if(i==0){
        if(amount>=nums[0] && amount%nums[0]==0)
            return amount/nums[0];
        else
            return 100001;
    }
    
    if(dp[i][amount]!=-1)
        return dp[i][amount];
       
    int mini = INT_MAX;
    
    // not pick
    mini = min(mini, min_coin(nums, amount, i-1, dp));
    
    // pick
    if(amount>=nums[i])
        mini = min(mini, min_coin(nums, amount-nums[i], i, dp) + 1);
       
    dp[i][amount] = mini;
    return mini;
}
int MinCoin(vector<int>nums, int amount)
{
    int n = nums.size();
    vector<vector<int>>dp(n, vector<int>(amount+1, -1));
    int val = min_coin(nums, amount, n-1, dp);
    if(val<=10000)
        return val;
    else
        return -1;
}
};
// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends