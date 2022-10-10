class Solution {
public:
   int dp[501] = {};
int maxSumAfterPartitioning(vector<int>& A, int K, int pos = 0, int res = 0) {
  if (pos < A.size() && dp[pos] != 0) return dp[pos];
  for (int i = 1, mv = 0; i <= K && pos + i <= A.size(); ++i) {
    mv = max(mv, A[pos + i - 1]);
    res = max(res, mv * i + maxSumAfterPartitioning(A, K, pos + i));
  }
  return dp[pos] = res;
}
};