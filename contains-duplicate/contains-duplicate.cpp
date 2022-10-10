class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int,int> m;
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            
            if(m[nums[i]] == 2)
                break;
        }
        
        if(nums.size() == i)
            return false;
        
        return true;
            
        
    }
};