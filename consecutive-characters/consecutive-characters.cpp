class Solution {
public:
    int maxPower(string s) {
        
        if(s.length() <= 1)
            return 1;
        
        int temp = 1;
        int count = 0;
        for(int i=1;i<s.length();i++)
        {
            if(s[i] != s[i-1])
            {
               count = max(count , temp);
                temp = 1;
            }
            else
            {
                temp++;
            }
        }
        count = max(count , temp);
        return count;
        
        
    }
};