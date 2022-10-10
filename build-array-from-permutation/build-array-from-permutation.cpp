class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int maxNum = nums.size();
        for(int i=0; i<nums.size(); i++) {
            nums[i] = nums[i] + (nums[nums[i]]%maxNum )*maxNum;
        }
        for(int i=0; i<nums.size(); i++) {
            nums[i] = nums[i]/maxNum;
        }
        return nums;
    }
};