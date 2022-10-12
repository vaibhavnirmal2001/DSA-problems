	class Solution {
public:
    int titleToNumber(string columnTitle) {
          int result = 0;
        for(char it : columnTitle)
        {
            int d = it - 'A' + 1;
            result = result * 26 + d;
        }
        return result;
    }
};