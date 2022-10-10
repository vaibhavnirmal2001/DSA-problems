class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      vector<int> ans(n+m);
      
      int i=0;
      int j =0;
      int k=0;
      while(i != m && j != n)
      {
        if(nums1[i]>= nums2[j])
          ans[k++] = nums2[j++];
        else
          ans[k++] = nums1[i++];
      }
      
      if(i == m)
      {
        while(j != n)
          ans[k++] = nums2[j++];
      }
      if(j == n)
      {
        while(i != m)
          ans[k++] = nums1[i++];
      }
      
      for(int l=0;l<(n+m);l++)
        nums1[l] = ans[l];
      
    }
};