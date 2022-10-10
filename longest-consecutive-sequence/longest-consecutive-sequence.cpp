class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        
        int max = INT_MIN;
        int count = 1;
        map <int,int> m;
        for(auto num:nums)
        {
            m[num]++;
        }
        auto it = m.begin();
        int prev  = it->first;
        it++;
        
        for(;it != m.end();it++)
        {
            //cout<<prev<<endl;
            if( it->first - prev != 1)
            {
                if(count > max)
                    max = count;
                count  = 1;
                
            }
            else
                count++;
            prev = it->first;
        }
        
        if(count > max)
            max  = count;
        
        return max;
    }
};