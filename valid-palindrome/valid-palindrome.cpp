class Solution {
public:
    bool isPalindrome(string s) {
        string a ;
        for(int i=0;i<s.size();i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z' ) || (s[i] >= 'A' && s[i] <= 'Z') || s[i] >= '0' && s[i] <= '9')
            a.push_back(tolower(s[i]));
        }
        for(int i=0;i<a.size();i++)
        {
            if(a[i] != a[a.size()-1-i])
                return false;
        }
        return true;
    }
};