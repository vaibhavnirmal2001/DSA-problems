class Solution {
public:
    bool sumGame(string num) {
        int l_sum = 0, r_sum = 0, m = num.size(), l = 0, r = 0;
        for(int i = 0; i < m / 2 ; ++i) {
            if(num[i] == '?')
                ++l;
            else
                l_sum += num[i] - '0';            
        }
        for(int i = m / 2; i < m; ++i) {
            if(num[i] == '?')
                ++r;
            else
                r_sum += num[i] - '0';            
        }
        if (l > r){
            if(l_sum > r_sum) return true; //never
            l -= r; 
            if(r_sum - l_sum < l / 2 * 9) return true; // "25??" 
            else if(l % 2 ==1) return true; // Alice
            else return r_sum - l_sum > l/2 * 9; // "general"
        }
        else if( r > l ){
            if(r_sum > l_sum) return true;
            r -= l;
            if(l_sum - r_sum < r / 2 * 9) return true;
            else if(r % 2 == 1) return true;
            else return l_sum - r_sum > r/2 * 9;
        }
        else
            return l_sum != r_sum;
    }
};
