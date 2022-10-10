class Solution {
public:
  

    int maxProduct(vector<int>& nums) {
        int r = nums[0];
      int maxi = r,mini = r;
      
      for(int i=1;i<nums.size();i++)
      {
        if(nums[i]<0)
        {
          swap(maxi,mini);
        }
        
        maxi =max(nums[i],maxi*nums[i]);
         mini =min(nums[i],mini*nums[i]);
        
        r = max(r,maxi);
      }
      return r;
    }
};