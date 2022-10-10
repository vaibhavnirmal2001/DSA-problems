class Solution {
public:
    vector<int> threeEqualParts(vector<int>& A) {
        vector<int> dp;
        for(int i = 0 ; i < A.size(); i++) // this loop is used to store the index of all 1s
            if(A[i]) dp.push_back(i);
        if(dp.size() % 3) return {-1, -1}; // if the number of 1s cannot be devided perfectly by 3, the input is invalid
	if(dp.empty()) return {0,2}; // if the number of 1 is zero, then it is natually valid, return {0, 2}
        int l1 = 0, l2 = dp.size() / 3, l3 = l2 * 2; //if we want to devide into 3 parts, the distribution pattern of 1s in three parts should be the same
        for(int i = 1; i < l2; i++ ) {
            int diff = dp[i] - dp[i-1];
            if(dp[l2+i] - dp[l2+i-1] != diff || dp[l3+i] - dp[l3+i-1] != diff) //unmatched pattern
                return {-1, -1};
	}
        int tail0 = A.size() - dp.back(); // calculate how many 0s tail
        if(dp[l3] - dp[l3-1] < tail0 ||   dp[l2] - dp[l2-1] < tail0) return {-1,-1};// all three parts should tail with the same number of 0s with that in the last part
        return {dp[l2-1] + tail0 - 1, dp[l3-1] + tail0};
    }
};