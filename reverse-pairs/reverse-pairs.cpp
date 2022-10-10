class Solution {
public:
  int merge(vector<int>& nums,int start,int mid,int end)
  {
    int j = mid+1;
    int count = 0;
    for(int i = start;i<=mid;i++ )
    {
       while(j<=end && nums[i] > 2LL * nums[j] )
       {
         j++;
       }
      count += (j-(mid+1));
    }
   
    vector<int> temp;
    int i = start;
    j = mid+1;
    int k = 0;
    while(i<= mid && j<= end)
    {
      if(nums[i]>=nums[j])
        temp.push_back(nums[j++]);
      else
        temp.push_back(nums[i++]);
    }
    
    while(i<=mid)
       temp.push_back(nums[i++]);
    while(j<=end)
      temp.push_back(nums[j++]);
    
    for(int y =start;y<=end;y++)
      nums[y] = temp[y-start];
    
    return count;
    
  }
  
  int merge_sort(vector<int>& nums,int start,int end)
  {
    if(start>=end)
      return 0;
      int pairs = 0;
      int mid = (start + end)/2;
      pairs+=merge_sort(nums,start,mid);
      pairs+=merge_sort(nums,mid+1,end);
      
      pairs+=merge(nums,start,mid,end);
    return pairs;
  }
  
    int reversePairs(vector<int>& nums) {
        return merge_sort(nums,0,nums.size()-1);
    }
};


































// class Solution {
// public:
//     int merge(vector<int> &nums, int l, int m, int h) {
//         int count=0;
//         int j=m+1;
//         for(int i=l;i<=m;++i) {
//             while(j<=h && nums[i] > 2LL*nums[j]) ++j;
//             count += (j - (m+1));
//         }
//         // merge of two sorted array
//         vector<int> temp;
//         int left=l,right=m+1;
//         // loop till on of them execuested
//         while(left<=m && right<=h) {
//             if(nums[left]<=nums[right]) temp.push_back(nums[left++]);
//             else temp.push_back(nums[right++]);
//         }
//         // remaining elements of left side
//         while(left<=m) temp.push_back(nums[left++]);
//         // remaining elements of right side
//         while(right<=h) temp.push_back(nums[right++]);
//         // assingn in main vector after merging
//         for(int i=l;i<=h;++i) {
//             nums[i]=temp[i-l];
//         }
//         return count;
//     }
//     int mergeSort(vector<int> &nums, int l, int h) {
//         if(l>=h) return 0; // A single element does not contain any pair 
//         int m=(l+h)/2;
//         int count=0;
//         count += mergeSort(nums,l,m);    // count from left side of vector
//         count += mergeSort(nums,m+1,h);  // count from right side of vector
//         count += merge(nums,l,m,h);      // count merge 
//         return count;
//     }
//     int reversePairs(vector<int>& nums) {
//         return mergeSort(nums, 0, nums.size()-1);
//     }
// };