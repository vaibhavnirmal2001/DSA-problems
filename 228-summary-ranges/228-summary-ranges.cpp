class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
      vector<string>ans;
        for(int i=0; i<nums.size(); i++)
        {
            cout<<nums[i]<<" ";
            string temp=to_string(nums[i]);
             int num=nums[i];
             int j=i+1;
             while(j<nums.size() && num+1==nums[j])
             { 
                 num=nums[j];
                 j++;
             }
            if(j==i+1)
            {
               ans.push_back(temp);  
            }
            else
            {
                temp+="->";
                temp+=to_string(nums[j-1]);
                ans.push_back(temp);
            }
            i=j-1;
        }
        return ans;
    }
};