class Solution {
public:
   char slowestKey(vector<int>& times, string keys) {
    int max_p = times[0], res = keys[0];
    for (auto i = 1; i < times.size(); ++i)
        if (max_p <= times[i] - times[i - 1]) {
            if (max_p == times[i] - times[i - 1])
                res = max((char)res, keys[i]);
            else
                res = keys[i];
            max_p = times[i] - times[i - 1];
        }
    return res;
}
};