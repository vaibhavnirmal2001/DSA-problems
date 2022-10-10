class Solution {
public:
  
  int helper(vector<int>& nums,int l ,int h)
  {
      while(l<h)
      {
        int mid = l + (h-l)/2;
        
        if(mid-1>=0 && nums[mid] == nums[mid-1])
           {
              int a = helper(nums,l,mid-2);
            if(a != -1)
              return a;
          
            int b = helper(nums,mid+1,h);
          if(b != -1)
            return b;
          
          return -1;
           }
        else if((mid+1 < nums.size() && nums[mid] == nums[mid+1] ))
        {
           int a = helper(nums,l,mid-1);
            if(a != -1)
              return a;
          
            int b = helper(nums,mid+2,h);
          if(b != -1)
            return b;
          
          return -1;
        }
        else
        {
             return nums[mid];
        }
        
      }
    
      if(l == h)
        return nums[l];
       return -1;   
    
  }
    int singleNonDuplicate(vector<int>& nums) {
      
      if(nums.size()==1)
      return nums[0];
      if(nums.size() == 2)
        return -1;
      
      int low = 0;
      int high = nums.size()-1;
      
      return helper(nums,low,high);
    }
};