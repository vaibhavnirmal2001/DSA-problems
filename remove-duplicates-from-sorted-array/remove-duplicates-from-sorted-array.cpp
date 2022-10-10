class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()<=1)
            return nums.size();
        int low = 0;
        int high = 0;
        
        while(high<nums.size())
        {
            if(nums[low] == nums[high])
            {
                high++;
            }
            else
            {
                low++;
                nums[low] = nums[high];
                high++;
            }
        }
        return low+1;
        
    }
};