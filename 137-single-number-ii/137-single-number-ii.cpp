class Solution {
public:
    //Sorting Method is better than counting set bits.
    int singleNumber(vector<int>& nums) 
    {
        /* Using Hash Map.
         unordered_map<int,int>mp;
        for(auto it: nums)
        {
            mp[it]++;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(mp[nums[i]]==1)
            {
                return nums[i];
            }
        } 
        */
        //counting Set bits.
        int power=0;
        long ans=0;
        for(int i=0; i<32; i++)
        {
            int sum=0;
            for(int j=0; j<nums.size(); j++)
            {
                sum+=nums[j]&1;
                nums[j]>>=1;
            }
               sum=sum%3;
              ans+=sum*pow(2,power); 
                power++;
        }
        return ans;
        
    }
};