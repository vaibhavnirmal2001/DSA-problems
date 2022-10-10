class Solution {
    bool isPossible(vector<int>& nums, int mid,int m)
    {
        int count = 1;
        int sum = 0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if( sum  + (nums[i+1] - nums[i]) >= mid )
            {
                count++;
                sum = 0;
                if(count >= m)
                    return true;
            }
            else
                sum += (nums[i+1] - nums[i]);
        }
       // cout<<count<<"  "<<sum<<" "<<mid<<endl;
        
        return false;
    }
public:
    int maxDistance(vector<int>& nums, int m) {
        
        sort(nums.begin(),nums.end());
        int low = nums[1] - nums[0] ;
        int high = low;
        
        for(int i=1;i<nums.size()-1;i++)
        {
            low = min(low,nums[i+1]-nums[i]);
            high += ( nums[i+1]-nums[i] );
        }
        
        int ans = -1;
       // cout<<low<<" "<<high<<endl;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            
            if(isPossible(nums,mid,m) == true)
            {
                ans = mid;
                low = mid+1;
            }
            else
                high = mid-1;
        }
        return ans;
    }
};