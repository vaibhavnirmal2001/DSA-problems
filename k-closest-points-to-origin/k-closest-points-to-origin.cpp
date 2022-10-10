class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
       // points.push_back({0,0});
        partial_sort(points.begin(), points.begin() + K, points.end(), [](vector<int>& p, vector<int>& q) {
            return p[0] * p[0] + p[1] * p[1] < q[0] * q[0] + q[1] * q[1];
        });
        
        
        return vector<vector<int>>(points.begin(), points.begin() + K);
    }
};