class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> freq(nums.size()+1,0);
      vector <int> ans;
      for(int i=0;i<nums.size();i++)
        freq[nums[i]]++;
      
      for(int i=1;i<freq.size();i++)
        if(freq[i] == 0)
          ans.push_back(i);
      
      return ans;
    }
};