class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n , vector<bool>(n, false));
        
        // dp[i][j] -> ith chr se jth chr tk ki substring palindrome hai ki nhi ? (true, false)
        // baad mein dp table mein iterate krke count kr lenge jitni value true hai(mtlb palindrome hai)
        
        // base cases
        for(int i=0; i<n; i++){
            dp[i][i] = true;
            if(i < n - 1 and s[i] == s[i+1])dp[i][i+1] = true;
        }
        
        // populating dp table from the bottom
        for(int i=n-1; i>=0 ;i--){
            for(int j=i+2; j< n; j++){
                if(s[i] == s[j])dp[i][j] = dp[i+1][j -1];
            }
        }
    
        // counting all palindromes    
        int ans = 0;
        for(int i=0 ;i<n ;i++){
            for(int j=i ; j< n;j++){
                if(dp[i][j])ans++;
            }
        }
        
        return ans;
    }
};
