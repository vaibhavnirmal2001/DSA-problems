class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for(auto i : nums) ++counts[i];
        
        // 1->3
        // 2->2
        // 3->1
        
        vector<vector<int>> buckets(nums.size() + 1);
        for(auto  p : counts) 
            buckets[p.second].push_back(p.first);
        reverse(begin(buckets), end(buckets));
        
        vector<int> res;
        for(auto & bucket: buckets) 
            for(auto i : bucket) {
                res.push_back(i);
                if(res.size() == k) return res;
            }
        
        return res;
    }
};