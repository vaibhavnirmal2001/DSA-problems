class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = 0;
        
        for(int i=nums.size()-1;i>=1;i--)
        {
            if(nums[i] > nums[i-1])
            {
                index = i;
                break;
            }
        }
        
        if(index)
        {
            int index2 = index;
            for(int i=nums.size()-1;i>=index;i--)
            {
                if(nums[i]>nums[index-1] && nums[i]<=nums[index])
                {
                    index2 = i;
                    break;
                }
            }
            swap(nums[index-1],nums[index2]);
            sort(nums.begin()+index,nums.end());
            
        }
        else
        {
            sort(nums.begin(),nums.end());
            
        }
    }
};