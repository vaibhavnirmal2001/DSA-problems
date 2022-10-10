// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	vector<int>SolveQueris(string str, vector<vector<int>>Query){
	 vector<int> dp[26];
    for(int i = 0;i<str.size();i++) dp[str[i]-'a'].push_back(i+1);
    
    vector<int>res;
    for(auto a : Query){
        int ct = 0;
        for(int i =0;i<26;i++){
            if(dp[i].size() == 0) continue;
            auto t = lower_bound(dp[i].begin(), dp[i].end(), a[0]);
            if(*t >= a[0] && *t <= a[1]) ct++;
        }
        res.push_back(ct);
    }
    return res;
	    // Code here
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		int q;
		cin >> q;
		vector<vector<int>>Query;
		for(int i = 0; i < q; i++){
			int l, r;
			cin >> l >> r;
			Query.push_back({l, r});
		}
		Solution obj;
		vector<int> ans = obj.SolveQueris(str, Query);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends