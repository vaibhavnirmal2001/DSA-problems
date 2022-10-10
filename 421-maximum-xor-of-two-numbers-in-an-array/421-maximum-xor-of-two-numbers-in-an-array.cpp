class Solution {
private:
    int helper(vector<int>& nums, int lb, int le, int rb, int re, int val, int bit){
        if(lb==le || re==rb) return 0;
        if(bit==-1) return val;
        int mask = 1 << bit, j = lb, k = rb;
        // quicksort-like partition according to current bit
        for(int i=lb; i<le; i++)
            if(nums[i]&mask) swap(nums[i], nums[j++]);
        for(int i=rb; i<re; i++)
            if(nums[i]&mask) swap(nums[i], nums[k++]);
        // if there is valid xor between the left half and right half, current bit = 1
        int ret = max(helper(nums, j, le, rb, k, (val<<1)+1, bit-1), 
                      helper(nums, lb, j, k, re, (val<<1)+1, bit-1));
        // else current bit = 0
        return ret>0? ret: helper(nums, lb, le, rb, re, val<<1, bit-1);
    }
public:
    int findMaximumXOR(vector<int>& nums) {
        return helper(nums, 0, nums.size(), 0, nums.size(), 0, 30);
    }
};