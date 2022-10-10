class Solution {
public:
   int minSteps(string s, string t) {
        vector<int> mp(26, 0);
        for(int i = 0; i < s.size(); i++) {
            mp[s[i] - 'a']++;
            mp[t[i] - 'a']--;
        }
        int pos = 0, neg = 0;
        for(auto it : mp) {
            if(it > 0) pos += it;
            if(it < 0) neg -= it;
        }
        return max(pos, neg); 
   }
};