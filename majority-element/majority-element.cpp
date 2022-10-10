class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
      int counter  = 0;
      int candidate  = 0;
      
      
      for(auto num:nums)
      {
        if(counter == 0 )
        candidate = num;
        
        candidate == num ? counter++: counter--;
      }
      
      return candidate;
    }
};