class Solution {
public:
    int edgeScore(vector<int>& edges) {
        long long ans = INT_MIN;
        int node = INT_MIN;
        unordered_map<int,long long> umap;
        
        for(int i=0;i<edges.size();i++) {
            umap[edges[i]] += i;
        }
        
        for(auto it : umap) {
            if(ans < it.second) {
                ans = it.second;
                node = it.first;
            }else if(ans == it.second) {
                node = min(it.first,node);
            }
        }
        
        
        return node;
    }
};
