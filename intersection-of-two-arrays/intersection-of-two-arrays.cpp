class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> c;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int a = nums1.size();
        int b = nums2.size();
        int i = 0,j = 0;
        while((i < a) && (j < b))
        {
          if(nums1[i] == nums2[j]) 
          {
              c.push_back(nums1[i]);
              
              while((i < a) && nums1[i] == c[c.size()-1] )
              {
                  i++;
              }
               while((j < b) && nums2[j] == c[c.size()-1] )
              {
                  j++;
              }
              
          }
           else
           {
               if(nums1[i] > nums2[j])
                   j++;
               else
                   i++;
           }
        }
        return c;
        
    }
};