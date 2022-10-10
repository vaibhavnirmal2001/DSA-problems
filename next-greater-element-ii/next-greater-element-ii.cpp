class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector <int> temp(nums);
        
        vector <int> res(nums.size(),-1);
        
        for(int i=0;i<nums.size();i++)
            temp.push_back(nums[i]);
        
          // for(int j = 0; j<temp.size();j++)
          //     cout<<temp[j]<<" ";
        for(int i=0;i<nums.size();i++)
        {
            for(int j = i+1; j<temp.size();j++)
            {
                if(temp[j] > nums[i])
                {
                     res[i] = temp[j];
                     break;
                }
            }
        }
        
         return res;
        
    }
};