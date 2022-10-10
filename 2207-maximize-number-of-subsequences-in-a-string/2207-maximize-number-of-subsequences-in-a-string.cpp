class Solution {
public:
    
    long long maximumSubsequenceCount(string text, string pattern) {
        long long ans = 0;
        int a = 0;
        int b = 0;
        
        for(int i=0;i<text.size();i++)
        {
            if(text[i] == pattern[0])
            {
                a++;
            }
            if(text[i] == pattern[1])
            {
                b++;
            }
        }
        if(a>b)
        {
            b++;
            text += pattern[1]; 
        }  
        else
        {
            a++;
            text = pattern[0] + text;
        }
        
        for(int i=0;i<text.size();i++)
        {
            if(text[i] == pattern[0])
            {
               ans += b; 
            }
            if(text[i] == pattern[1])
            {
                b--;
            }
        }
        
        return ans;
    }
};