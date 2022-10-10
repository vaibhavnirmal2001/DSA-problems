class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans = INT_MIN;
        int prev = values[0] + 0;
        for(int i=1;i<values.size();i++){
            ans = max(ans,prev + values[i] - i);
            prev = max(prev,values[i]+i);
        }
        return ans;
    }
};