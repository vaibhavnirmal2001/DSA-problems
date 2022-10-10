class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int freq1 = 0;
        int freq2 = 0;
        int num1 = 0;
        int num2 = 1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == num1)
                    freq1++;
            else if(nums[i] == num2)
                    freq2++;
            else if(freq1 == 0)
            {
                num1 = nums[i];
                freq1 =1 ;
            }
            else if(freq2 == 0)
            {
                num2 = nums[i];
                freq2 = 1;
            }
            else
            {
             freq1--;
             freq2--;
            }
            
        }
        int count1 = 0;
        int count2 = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == num1)count1++;
            else if(nums[i] == num2)count2++;
        }
        vector<int> ans;
        if(count1 > nums.size()/3)
            ans.push_back(num1);
        if(count2> nums.size()/3)
            ans.push_back(num2);
        cout<<num1<<num2<<endl;
        return ans;
    }
};