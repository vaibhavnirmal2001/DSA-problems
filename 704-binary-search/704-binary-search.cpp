class Solution {
public:
    
    
    int binary_search(int start,int end,int target,vector<int>& nums)
    {
        if(start<=end)
        {
            int mid = start + (end-start)/2;
            
            if(nums[mid] == target)return mid;
            
            if(nums[mid]>target)
            {
                return binary_search(start,mid-1,target,nums);
            }
            else
            {
                return binary_search(mid+1,end,target,nums);
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        return binary_search(0,nums.size()-1,target,nums);
    }
};