class Solution {
public:
    bool isPossible(int mid, vector<int>& nums, int days)
    {
        int count = 1;
        int curr_sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(curr_sum + nums[i] > mid)
            {
                count++;
                if(count > days)
                    return false;
                
                curr_sum = nums[i];
            }
            else
            {
                curr_sum += nums[i];
            }
        }
        cout<<"count  mid "<<count<<" "<<mid<<endl;
        return true;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        
        int low = 0;
        int high = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            low = max(low,nums[i]);
            high += nums[i];
        }
        int ans = 0;
        while(low <= high)
        {
            int mid = (low+high)>>1;
            //cout<<mid<<" ";
            if(isPossible(mid,nums,days))
            {
                
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1; 
        }
        return ans;
    }
};