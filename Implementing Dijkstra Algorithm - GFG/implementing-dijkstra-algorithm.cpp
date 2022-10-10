// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
  vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>dist(V,INT_MAX);
        priority_queue<pair<int,int>>pq;
        pq.push({0,S});
        dist[S]=0;
        while(!pq.empty())
        {
            pair<int,int>p=pq.top();
            int a=p.second;
            pq.pop();
            for(int i=0;i<adj[a].size();i++)
            {
                int res=adj[a][i][0];
                int w=adj[a][i][1];
                if(w+dist[a]<dist[res])
                {
                    dist[res]=dist[a]+w;
                    pq.push({-1*dist[res],res});
                }
            }
        }
        return dist;
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends