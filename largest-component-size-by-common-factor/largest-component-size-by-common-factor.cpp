class UnionFindSet {
public:
    UnionFindSet(int n) : _parent(n) {
        for (int i=0; i<n; i++) {
            _parent[i] = i;
        }
    }
    
    void Union(int x, int y) {
        _parent[Find(x)] = _parent[Find(y)];
    }
    
    int Find(int x) {
        if (_parent[x] != x) {
            _parent[x] = Find(_parent[x]);
        }
        return _parent[x];
    }
    
private:
    vector<int> _parent;
};

class Solution {
public:
    int largestComponentSize(vector<int>& A) {
        int n = *max_element(A.begin(), A.end());
        UnionFindSet ufs(n+1);
        for (int &a : A) {
            for (int k = 2; k <= sqrt(a); k++) {
                if (a % k == 0) {
                    ufs.Union(a, k);
                    ufs.Union(a, a / k);
                }
            }
        }
        
        unordered_map<int, int> mp;
        int ans = 1;
        for (int &a : A) {
            ans = max(ans, ++mp[ufs.Find(a)]);
        }
        return ans;
    }
};