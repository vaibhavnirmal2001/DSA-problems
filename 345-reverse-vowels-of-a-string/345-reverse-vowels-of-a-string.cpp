class Solution {
public:
    
    bool isvowel(char a)
    {
        if(a == 'a' || a=='A' || a == 'e'|| a == 'E'|| a == 'i' ||a == 'I'||a == 'O'  ||a == 'o' || a== 'u' || a== 'U')
        return true;
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j)
        {
            while(!isvowel(s[i]) && i<j)
                    i++;
            while(!isvowel(s[j]) && i<j)
                    j--;
            
            if(i<j)
                swap(s[i++],s[j--]);
        }
        return s;
    }
};