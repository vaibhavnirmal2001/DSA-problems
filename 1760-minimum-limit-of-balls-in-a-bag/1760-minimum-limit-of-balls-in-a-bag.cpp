class Solution {
public:
    
    bool isPossible(int mid,vector<int>& nums, int maxOperations)
    {
        int count = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            count += ((nums[i] - 1 )/mid);
        }
        
        if(maxOperations >= count)
            return true;
        return false;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        
        int low  = 1;
        int high = 1e9;
        int ans = 0;
        while(low<=high)
        {
            int mid = (low+high)>>1;
            
            if(isPossible(mid,nums,maxOperations))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};