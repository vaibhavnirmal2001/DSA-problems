class Solution {
public:
    
    bool canform(string s,unordered_map<string,int> & mp)
    {
        for(int i=1;i<s.size();i++)
        {
            string left = s.substr(0,i);
            string right = s.substr(i);
            
            if(mp.count(left))
                if((mp.count(right) || canform(right,mp)))
                    return true;
        }
        return false;
    }
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string> ans;
        unordered_map<string,int> mp;
        
        for(int i=0;i<words.size();i++)
            mp[words[i]]++;
        
        for(int i=0;i<words.size();i++)
        {
            if(canform(words[i],mp))
                ans.push_back(words[i]);
        }
        return ans;
    }
};