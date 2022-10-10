class Solution {
public:
  vector<int> diStringMatch(string S) {
    vector<int> res;
    for (int l = 0, h = S.size(), i = 0; i <= S.size(); ++i)
        res.push_back(i == S.size() || S[i] == 'I' ? l++ : h--);
    return res;
}
};