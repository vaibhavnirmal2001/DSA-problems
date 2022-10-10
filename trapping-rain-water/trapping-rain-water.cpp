class Solution {
public:
    int trap(vector<int>& height) {
        
        if(height.size()<=2)
            return 0;
        int n = height.size();
        int l = 0;
        int r = n-1;
        int ans = 0;
        int lmax = 0;
        int rmax = 0;
        
        while(r>=l)
        {
            if(lmax>=rmax)
            {
                ans += max(0,rmax-height[r]);
                rmax = max(rmax,height[r]);
                r--;
            }
            else
            {
                ans += max(0,lmax-height[l]);
                lmax = max(lmax,height[l]);
                l++;
            }
            
        }
        return ans;
    }
};