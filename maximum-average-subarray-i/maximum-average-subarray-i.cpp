class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0;
        
        for(int i=0;i<k;i++)
        {
            ans += nums[i];
        }
        double temp = ans;
        ans = ans / k;
        
        for(int i = k;i<nums.size();i++)
        {
          temp = temp + nums[i] - nums[i-k];
            
          ans = max(ans,temp/k);
        }
        
        return ans;
        
    }
};