class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        
        unordered_map<int,int> m;
        stack<int> s;
        
        for(int i=nums.size()-1;i>=0 ;i--)
        {
            while(!s.empty() && s.top() <= nums[i])
                s.pop();
            if(!s.empty())
                m[nums[i]] = s.top();
            else
                m[nums[i]] = -1;
            
            s.push(nums[i]);
        }
        vector<int> ans;
        for(int i=0;i<findNums.size();i++)
        {
            ans.push_back(m[findNums[i]]) ; 
        }
        
        return ans;
    }
};

        // stack<int> s;
        // unordered_map<int, int> m;
        // for (int n : nums) {
        //     while (s.size() && s.top() < n) {
        //         m[s.top()] = n;
        //         s.pop();
        //     }
        //     s.push(n);
        // }
        // vector<int> ans;
        // for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);