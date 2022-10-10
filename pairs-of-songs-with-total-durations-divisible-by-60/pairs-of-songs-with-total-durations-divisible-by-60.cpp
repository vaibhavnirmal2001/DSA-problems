class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& t) {
        vector<int> v(60);
        int ans   =0;
        for(int i=0;i<t.size();i++)
        {
            ans += v[(600-t[i])%60];
            v[t[i]%60]++;
        }
        return ans;
    }
};