class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.size() <=1)
            return s.size();
        
        int ans = 0;
        int low = 0;
        int right = 0;
        vector <int> v(256,-1);
        
        while(right < s.size())
        {
            if(v[s[right]] != -1)
            {
               low = max(low,v[s[right]]+1);
            }
          
                v[s[right]] = right;
                ans = max(ans,right-low+1);
            
            right++;
        }
        
        
        return ans;
    }
};







