// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	     vector<int> dis(n,1e6);
	    dis[0]=0;
	    for(int i=1;i<n;i++){
	        for(auto &p:edges){
	            if(dis[p[0]]+p[2]<dis[p[1]]){
	                dis[p[1]]=p[2]+dis[p[0]];
	            }
	        }
	    }
	    for(auto &p:edges){
	        if(dis[p[0]]+p[2]<dis[p[1]]) return 1;
	    }
	    return 0;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends