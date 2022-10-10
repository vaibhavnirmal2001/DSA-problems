class Solution {
public:
    int sum(vector<int>& nums,int num)
    {
        int ans = 0;
        for(int i=0;i<nums.size();i++)
            ans += nums[i]%num == 0 ? (nums[i]/num) : (nums[i]/num + 1);
       // cout<<ans<<" "<<num<<endl;
        return ans;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int maxi = INT_MIN;
        
        for(auto a:nums){
            if(a>maxi)
                maxi = a;
        }
        
        int low =1;
        int high = maxi;
        
        while(low<high)
        {
            int mid = low + (high-low)/2;
            if(sum(nums,mid) <= threshold)
            {
                high = mid;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
        
    }
};