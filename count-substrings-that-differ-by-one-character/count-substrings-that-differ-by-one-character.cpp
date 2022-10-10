class Solution {
public:
    int countSubstrings(string s, string t) {
        // dp[i][j] := longest substring ends at s[i] and t[j] such that they are equal
		// dp2[i][j] := longest substring starts at s[i] and t[j] such that they are equal
        int m = s.length(), n = t.length();
        vector<vector<int>> dp(m + 2, vector<int>(n + 2));
        vector<vector<int>> dp2(m + 2, vector<int>(n + 2));
        
        {
            dp[1][1] = s[0] == t[0];

            for (int i = 1; i <= m; i++)
                dp[i][1] = s[i - 1] == t[0];

            for (int j = 1; j <= n; j++)
                dp[1][j] = s[0] == t[j - 1];

            for (int i = 2; i <= m; i++)
                for (int j = 2; j <= n; j++) {
                    if (s[i - 1] == t[j - 1])
                        dp[i][j] = 1 + dp[i - 1][j - 1];
                }
        }
        
        {
            dp2[m][n] = s[m - 1] == t[n - 1];
            
            for (int i = 1; i <= m; i++)
                dp2[i][n] = s[i - 1] == t[n - 1];

            for (int j = 1; j <= n; j++)
                dp2[m][j] = s[m - 1] == t[j - 1];
            
            for (int i = m - 1; i >= 1; i--)
                for (int j = n - 1; j >= 1; j--) {
                    if (s[i - 1] == t[j - 1])
                        dp2[i][j] = 1 + dp2[i + 1][j + 1];
                }
        }
        
        int res = 0;
        
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                if (s[i] != t[j]) {
                    res += (dp[i][j] + 1) * (dp2[i + 2][j + 2] + 1);
                }
            }

        return res;
        
    }
};