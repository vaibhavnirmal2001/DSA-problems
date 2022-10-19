class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a=0;
        vector<int>vec{};
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                vec.push_back(nums[i]);
            }
            else{
                a++;
            }
        }
        while(a)
        {
            vec.push_back(0);
            a--;
        }
        nums=vec;
        
    }
};
