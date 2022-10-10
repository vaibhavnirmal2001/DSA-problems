class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int curr_max = 0;
        
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i] == 1)
          {
              curr_max++;
              maxi = max(maxi,curr_max);
          }
          else
          {
              curr_max = 0;
          }
        }
        return maxi;
    }
};