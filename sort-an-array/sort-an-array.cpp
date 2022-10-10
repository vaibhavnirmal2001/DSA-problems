class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
    stable_sort(nums.begin(), nums.end());
        return nums;
    }
};