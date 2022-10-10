class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        
        int i = 0;
        int j = nums.size()-1;
        int k = nums.size()-1;
        vector<int> ans(nums.size());
        while(j>=i)
        {
            if(nums[j]*nums[j] < nums[i]*nums[i])
            {
                ans[k--] = pow(nums[i++],2);
            }
            else
            {
                ans[k--] = pow(nums[j--],2);
            }
        }
        return ans;
    }
};