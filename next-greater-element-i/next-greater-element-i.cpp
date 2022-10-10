class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack <int> s;
        map <int,int> m;
        vector <int> res(nums1.size(),-1);
        
        for(int i=0;i<nums2.size();i++)
        {
            int ele = nums2[i];
            
            // if( s.empty() == false && ele <= s.top())
            // {
            //     s.push(ele);
            // }
            // else
            // {
            //     while(s.empty() != true)
            //     {
            //         m[s.top()] = ele;
            //         s.pop();
            //     }
            // }
            
            while(!s.empty() && ele > s.top())
            {
                m[s.top()] = ele;
                s.pop();
            }
            s.push(ele);
            
        }
        
        for(int i=0;i<nums1.size();i++)
        {
            int num = nums1[i];
            
            if(m.find(num) != m.end())
            {
                int val = m[num];
                res[i] = val;
            }
            
        }
        return res;
        
        
        
    }
};