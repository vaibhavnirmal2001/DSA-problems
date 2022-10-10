class Solution {
public:
  string customSortString(string order, string str) 
    {
        unordered_map<char,int> mp;
        for(auto i:str)
            mp[i]++;
        string res;
        for(auto i:order)
        {
            res+=string(mp[i],i);
            mp[i]=0;
        }
        for (auto i : mp) {
            res += string(i.second, i.first);
        }
        return res;
    }
};