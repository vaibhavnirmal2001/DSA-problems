class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int ans = 0;
        int start = 0;
        int currones = 0;
        while(start<nums.size())
        {
            if(nums[start] == 1)
            {
                currones++;
            }
            else
            {
                  if(currones>ans)
                    ans = currones;
                currones = 0;
            }
            start++;
        }
        
        if(currones>ans)
            ans = currones;
        
        return ans;
        
    }
};