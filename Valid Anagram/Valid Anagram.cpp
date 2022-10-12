class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};


class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length())
            return false;
        
        unordered_map<char, int> freq;
        for(int i = 0 ; i < s.length() ; i++){
            freq[s[i]]++;
            freq[t[i]]--;
        }
        
        for(auto itr : freq){
            if(itr.second != 0)
                return false;
        }
        
        return true;
    }
};



class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26, 0);
        
        if(s.length() != t.length())
            return false;
        
        for(int i=0 ; i < s.length() ; i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        
        for(int i=0 ; i < 26 ; i++){
            if(freq[i] != 0)
                return false;
        }
        
        return true;
    }
};
