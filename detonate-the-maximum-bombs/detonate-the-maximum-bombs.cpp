class Solution {
public:
    // from gfg          https://www.geeksforgeeks.org/find-if-a-point-lies-inside-or-on-circle/
    bool isInside(int circle_x, int circle_y,
                   int rad, int x, int y)
    {
    
    if ((x - circle_x) * (x - circle_x) +
        (y - circle_y) * (y - circle_y) <= rad * rad)
        return true;
    else
        return false;
}
  int maximumDetonation(vector<vector<int>>& bs) {
    int res = 0, sz = bs.size();
    vector<vector<int>> al(bs.size());
    for (int i = 0; i < sz; ++i) {
        long long x = bs[i][0], y = bs[i][1], r2 = (long long)bs[i][2] * bs[i][2];
        for (int j = 0; j < bs.size(); ++j)
            if ((x - bs[j][0]) * (x - bs[j][0]) + (y - bs[j][1]) * (y - bs[j][1]) <= r2)
                al[i].push_back(j);
    }
    for (int i = 0; i < sz && res < sz; ++i) {
        vector<int> q{i};
        unordered_set<int> detonated{i};
        while (!q.empty()) {
            vector<int> q1;
            for (int j : q)
                for (int k : al[j])
                    if (detonated.insert(k).second)
                        q1.push_back(k);
            swap(q, q1);
        }
        res = max((int)detonated.size(), res);
    }
    return res;
    }
};