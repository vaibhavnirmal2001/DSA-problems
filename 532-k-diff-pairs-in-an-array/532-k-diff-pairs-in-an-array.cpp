class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int> m;
        for(auto a:nums)
            m[a]++;
        int ans = 0;
        for(auto it = m.begin();it != m.end();it++)
        {
            if(k == 0)
            {
                if(it->second > 1)
                    ans ++;
            }
            else
            {
                if(m.find(it->first + k) != m.end())
                ans++;
            }
        }
        return ans;
    }
};