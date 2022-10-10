class Solution {
public:

    void permuteUniqueHelper(int i, vector<int>& nums, vector<vector<int> >& result) {
        if (i == nums.size()) { result.emplace_back(nums); return; }
        unordered_set<int> st;
        for (int j = i; j < nums.size(); ++j) {
            if (st.count(nums[j]) == 1) { continue; }
            st.insert(nums[j]);
            std::swap(nums[i], nums[j]);
            permuteUniqueHelper(i + 1, nums, result);
            std::swap(nums[i], nums[j]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int> > result;
        permuteUniqueHelper(0, nums, result);
        return result;
    }
};