class CombinationIterator {
    string s;
    int n, L, mask = 0;
    bool has_next = true;
public:
    CombinationIterator(string s, int n) : s(s), L(size(s)), n(n) {
        for(int i = 0; i < n; i++) mask |= 1 << (L-1-i);
    }
    string next() {
        string combination = "";
        for(int j = L; j >= 0; j--)             // iterate over mask from MSB to LSB
                if(mask & (1 << j))               // if a bit is set,
                    combination += s[L-1-j];      // then add character corresponding to that bit
        updateMask();                             // move to next mask
        return combination;
    }
    // using Gospel's hack
    void updateMask() {
        int t = mask + 1, u = t ^ mask, v = t & mask;
        mask = v - (v & -v) / (u + 1);
        has_next = mask;
    }
    bool hasNext() { return has_next; }
};