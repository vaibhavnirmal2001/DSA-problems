class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int l = 0,r = 0;
        int counter = 0;
        int n = nums.size();
        int ans = INT_MIN;
         
        while(r<n)
        {
           if(nums[r] == 0)
               counter++;
            
            r++;
            while(counter > k)
            {
                if(nums[l]==0)
                    counter--;
                
                l++;
            }
            ans = max(ans,r-l);
               
        }
        return ans;
    }
};