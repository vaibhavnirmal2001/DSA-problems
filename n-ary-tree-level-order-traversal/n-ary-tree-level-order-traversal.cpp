class Solution {
public:
    void rec(Node* root, int level) {
        if (!root) return;
        if (level == res.size()) res.push_back({});
        res[level].push_back(root->val);
        for (auto child : root->children)
            rec(child, level+1);
    }
    
    vector<vector<int>> levelOrder(Node* root) {
        rec(root, 0);
        return res;
    }
    
private:
    vector<vector<int>> res;
};