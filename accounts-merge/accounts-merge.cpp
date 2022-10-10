class Solution {
public:
    void dfs(string& email) {
        seen.insert(email);
        ans.back().push_back(email);
        for(auto& adjEmail : G[email]) 
            if(!seen.count(adjEmail)) 
                dfs(adjEmail);        
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& A) {        
        for(auto& acc : A)                            
            for(int i = 2; i < size(acc); i++)              // create graph with email as nodes and,
                G[acc[i]].push_back(acc[i-1]),              // add edges between adjacent nodes of same account
                G[acc[i-1]].push_back(acc[i]);
        
        for(auto& acc : A) 
            if(!seen.count(acc[1])) {                       // If an email from a account is not previously seen,
                ans.push_back({acc[0]});                    // create new account & insert person's name
                dfs(acc[1]);                                // perform dfs to find all his emails & add it to the list
                sort(begin(ans.back())+1, end(ans.back())); // sort the emails
            }            
   //     ans.push_back({});
        return ans;
    }
private:
    unordered_map<string, vector<string>> G;  // adjacency list graph with email as nodes and edges between adjacent email of same account
    unordered_set<string> seen;               // to mark an email as visited in DFS
    vector<vector<string>> ans;               // final answer after merging accounts
};