class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_map<char,int> m;
        
        for(int i=0;i<stones.length();i++)
        {
            m[stones[i]]++;
        }
        
        int ans = 0;
       for(int i=0;i<jewels.length();i++)
       {
           if(m.count(jewels[i]))
           {
               ans += m[jewels[i]];
           }
       }
        return ans;

        
    }
};