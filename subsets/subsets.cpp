class Solution {
public:
    vector<vector<int>> ans;
    
    void subsets_helper(int index,vector<int> & nums,vector<int> &subset)
    {
        
        if(index == nums.size())
        {
            ans.push_back(subset);
            return;
        }
         subset.push_back(nums[index]);
        subsets_helper(index+1,nums,subset);
        subset.pop_back();
        subsets_helper(index+1,nums,subset);
        
        return;
        
//         ans.push_back(subset);
        
//         for(int i= index;i<nums.size();i++)
//         {
//             subset.push_back(nums[i]);
//             subsets_helper(i+1,nums,subset);
//             subset.pop_back();
//         }
//         return ;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        subsets_helper(0,nums,subset);
        return ans;
    }
};