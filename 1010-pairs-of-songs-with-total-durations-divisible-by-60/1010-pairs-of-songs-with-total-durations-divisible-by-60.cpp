class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<long long int> modd(60);
        long long int total = 0;
        for(auto a:time) modd[a%60]++;
        for(int i=1;i<=29;i++) total += (modd[i] * modd[60-i]);
        total = total + modd[30]*(modd[30]-1)/2 ;
        total += modd[0]*(modd[0]-1)/2;
        return total;
    }
};