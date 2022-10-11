class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {
        if(nums.size()==1)
            return 0;
       int ans=0;
        for(int i=1; i<nums.size(); i++)
        {
            if(i<nums.size()-1 && nums[i-1]<nums[i] && nums[i]>nums[i+1])
              ans=i;
            else if(nums[i]>nums[i-1])
                ans=i;
            
        }
        return ans;
    }
};