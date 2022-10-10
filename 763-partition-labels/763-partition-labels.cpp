class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
            m[s[i]] = i;
        
        int start = 0;
        int end = 0;
        for(int i=0;i<s.size();i++)
        {
            end = max(end,m[s[i]]);
            
            if(i == end)
            {
                ans.push_back(end-start+1);
                start = i+1;
            }
        }
        return ans;
    }
};