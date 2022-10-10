class Solution {
public:
    int minCostToMoveChips(vector<int>& P) {
        int oddPos = 0, evenPos = 0;
        for(int p : P)
            p & 1 ? oddPos++ : evenPos++;
        return min(oddPos, evenPos);
    }
};