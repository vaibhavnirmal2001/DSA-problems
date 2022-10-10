class Solution {
public:
  bool stoneGame(vector<int>& p) {
        vector<int> dp = p;
        for (int d = 1; d < p.size(); d++)
            for (int i = 0; i < p.size() - d; i++)
                dp[i] = max(p[i] - dp[i + 1], p[i + d] - dp[i]);
        return dp[0] > 0;
    }
};