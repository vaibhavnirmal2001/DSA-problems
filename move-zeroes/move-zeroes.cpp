class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int counter = 0;
        int j = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != 0)
            {
                nums[j++] = nums[i];
            }
        }
        for(int k = j;k<nums.size();k++)
        {
            nums[k] = 0;
        }
    }
};