class Solution {
public:
 int combinationSum4(vector<int>& nums, int target) {
	sort(begin(nums), end(nums));
    vector<uint> dp(target + 1); dp[0] = 1;
	for (int curTarget = 1; curTarget <= target; curTarget++) 
        for (auto& num : nums) 
            if (num <= curTarget)  dp[curTarget] += dp[curTarget - num];
            else break;
    return dp[target];
}
};