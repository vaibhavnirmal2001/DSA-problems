class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
      int c1 = 0;
      int c2 = 0;
      int ele1 = INT_MIN;
      int ele2 = INT_MIN;
      
      for(auto num:nums)
      {
        if(num == ele1)
          c1++;
        else if(num == ele2)
          c2++;
        else if(c1==0)
        {
          ele1 = num;
          c1 = 1;
        }
        else if(c2==0)
        {
          ele2 = num;
          c2 =1 ;
        }
        else
        {
          c1--;
          c2--;
        }
      }
      vector<int> ans;
      // if(ele1 != -1 )
      // {
      //   ans.push_back(ele1);
      // }
      // if(ele2 != -1)
      // {
      //   ans.push_back(ele2);
      // }
       c1 = 0;
       c2 = 0;
      for(auto num:nums)
      {
        if(num == ele1)
          c1++;
        if(num == ele2)
          c2++;
        
      }
        
        if(c1>floor(nums.size()/3))
          ans.push_back(ele1);
        if(c2>floor(nums.size()/3))
          ans.push_back(ele2);
        
      return ans;
    }
};