class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size());
        stack<int> s;
        for(int i=2*nums.size()-1; i>=0;i--)
        {
            while(!s.empty() && s.top()<=nums[i%nums.size()] )
                s.pop();
            
            if(i<nums.size())
            {
            if(s.empty())
                ans[i%nums.size()] = -1;
            else
                ans[i%nums.size()] = s.top();
             
            }
           
            s.push(nums[i%nums.size()]);
        }
        
        return ans;
        
        
    }
};